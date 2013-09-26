<?php
/**
 * @file
 * fe_twitter_signin.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fe_twitter_signin_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_signin_button';
  $strongarm->value = 'Sign-in-with-Twitter-lighter.png';
  $export['twitter_signin_button'] = $strongarm;

  return $export;
}
