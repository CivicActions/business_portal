<?php
/**
 * @file
 * sbp_wizard.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function sbp_wizard_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_color'.
  $field_bases['field_color'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_color',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 16,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_jurisdiction'.
  $field_bases['field_jurisdiction'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_jurisdiction',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 'City',
        2 => 'County',
        3 => 'State',
        4 => 'Federal',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_float',
  );

  return $field_bases;
}
