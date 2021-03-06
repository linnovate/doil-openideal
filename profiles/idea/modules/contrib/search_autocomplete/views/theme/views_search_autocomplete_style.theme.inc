<?php

/**
 * @file
 * Views theme to render view fields as JSON.
 *
 * - $view: The view in use.
 * - $rows: Array of row objects as rendered by _search_autocomplete_render_fields
 * - $attachment: Not used currently
 * - $options: The options for the style passed in from the UI.
 *
 * @ingroup views_templates
 * @see search_autocomplete.views.inc
 */
function template_preprocess_views_search_autocomplete_style(&$vars) {
  global $base_url;

  $view = $vars["view"];
  $rows = $vars["rows"];

  $arg = '';
  if (array_key_exists(0, $view->args))
    $arg = $view->args[0] ? $view->args[0] : '';

  $base = $view->base_table;
  $objects = array();

  $vars['bitmask'] = NULL;

  foreach ($rows as $row) {

    $object = array();

    /* Convert the $rows into a hierachial key=>value array */
    foreach ($row as  $field) {
      $matches = array();

      $regexp = "<a\s[^>]*href=(\"??)([^\" >]*?)\\1[^>]*>(.*)<\/a>";
      if (preg_match("/$regexp/siU", htmlspecialchars_decode($field->content, ENT_QUOTES), $matches)) {

        $link   = $base_url . $matches[2];
        $value  = $matches[3];

        if ($arg == '' || stripos($value, $arg)  !== FALSE ) {

          $label = "";
          if ($field->label)
            $label = strip_tags($field->label);

          $object['link']  = $link;
          $object['label'] = $label . $value;
          $object['value'] = $value;

          $objects[] = $object;
  
        }
      }
    }
    
  }

  // check if user wants nested arrays
  $vars["rows"] = $objects;
}
