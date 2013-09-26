<?php
/**
 * @file
 * fe_twitter_signin.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fe_twitter_signin_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
