<?php
/**
 * @file
 * sbp_online_resource.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function sbp_online_resource_defaultconfig_features() {
  return array(
    'sbp_online_resource' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function sbp_online_resource_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__online_resource';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__online_resource'] = $strongarm;

  return $export;
}
