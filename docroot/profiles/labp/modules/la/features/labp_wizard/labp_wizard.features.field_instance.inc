<?php
/**
 * @file
 * labp_wizard.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function labp_wizard_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-sbp_wizard_screen-field_address_lookup_form'.
  $field_instances['node-sbp_wizard_screen-field_address_lookup_form'] = array(
    'bundle' => 'sbp_wizard_screen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'LEAVE BLANK, unless this is the address lookup screen, then enter text like "yes".',
    'display' => array(
      'alternate' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'json' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'thumbnail' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_address_lookup_form',
    'label' => 'Address Lookup Form',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address Lookup Form');
  t('LEAVE BLANK, unless this is the address lookup screen, then enter text like "yes".');

  return $field_instances;
}
