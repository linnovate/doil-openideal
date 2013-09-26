<?php
/**
 * @file
 * social_networks_connector.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function social_networks_connector_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'oauth_common_enable_provider';
  $strongarm->value = 0;
  $export['oauth_common_enable_provider'] = $strongarm;

  return $export;
}
