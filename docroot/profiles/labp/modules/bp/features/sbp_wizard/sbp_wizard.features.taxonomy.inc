<?php
/**
 * @file
 * sbp_wizard.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function sbp_wizard_taxonomy_default_vocabularies() {
  return array(
    'business_portal_wizard_sections' => array(
      'name' => 'Business Portal Wizard Sections',
      'machine_name' => 'business_portal_wizard_sections',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
