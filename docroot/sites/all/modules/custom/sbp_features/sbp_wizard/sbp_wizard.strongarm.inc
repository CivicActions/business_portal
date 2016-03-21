<?php
/**
 * @file
 * sbp_wizard.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sbp_wizard_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__business_portal_wizard_sections';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '5',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'name' => array(
          'weight' => '0',
        ),
        'description' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__business_portal_wizard_sections'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_taxonomy_term__business_portal_wizard_sections';
  $strongarm->value = TRUE;
  $export['metatag_enable_taxonomy_term__business_portal_wizard_sections'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_business_portal_wizard_sections';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(),
  );
  $export['panelizer_defaults_taxonomy_term_business_portal_wizard_sections'] = $strongarm;

  return $export;
}
