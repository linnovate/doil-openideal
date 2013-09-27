<?php
/**
 * @file
 * social_networks_connector.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function social_networks_connector_user_default_permissions() {
  $permissions = array();

  // Exported permission: access connections tab.
  $permissions['access connections tab'] = array(
    'name' => 'access connections tab',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'connector',
  );

  // Exported permission: connect with oauthconnector_facebook.
  $permissions['connect with oauthconnector_facebook'] = array(
    'name' => 'connect with oauthconnector_facebook',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'connector',
  );

  // Exported permission: connect with oauthconnector_google.
  $permissions['connect with oauthconnector_google'] = array(
    'name' => 'connect with oauthconnector_google',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'connector',
  );

  // Exported permission: connect with oauthconnector_linkedin.
  $permissions['connect with oauthconnector_linkedin'] = array(
    'name' => 'connect with oauthconnector_linkedin',
    'roles' => array(),
    'module' => 'connector',
  );

  // Exported permission: connect with oauthconnector_twitter.
  $permissions['connect with oauthconnector_twitter'] = array(
    'name' => 'connect with oauthconnector_twitter',
    'roles' => array(),
    'module' => 'connector',
  );

  // Exported permission: sync local profile with connections.
  $permissions['sync local profile with connections'] = array(
    'name' => 'sync local profile with connections',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'connector',
  );

  return $permissions;
}
