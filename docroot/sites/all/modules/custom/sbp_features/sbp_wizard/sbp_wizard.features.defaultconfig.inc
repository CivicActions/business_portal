<?php
/**
 * @file
 * sbp_wizard.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function sbp_wizard_defaultconfig_features() {
  return array(
    'sbp_wizard' => array(
      'field_default_fields' => 'field_default_fields',
      'strongarm' => 'strongarm',
      'taxonomy_default_vocabularies' => 'taxonomy_default_vocabularies',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function sbp_wizard_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'taxonomy_term-business_portal_wizard_sections-field_color'.
  $fields['taxonomy_term-business_portal_wizard_sections-field_color'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_color',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
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
    ),
    'field_instance' => array(
      'bundle' => 'business_portal_wizard_sections',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Hex html color - #FFF or #000000',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'quickedit' => array(
              'editor' => 'plain_text',
            ),
          ),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_color',
      'label' => 'Color',
      'required' => 0,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 7,
        ),
        'type' => 'text_textfield',
        'weight' => 2,
      ),
    ),
  );

  // Exported field: 'taxonomy_term-business_portal_wizard_sections-field_image'.
  $fields['taxonomy_term-business_portal_wizard_sections-field_image'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => 0,
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => 0,
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'business_portal_wizard_sections',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
            'quickedit' => array(
              'editor' => 'form',
            ),
          ),
          'type' => 'image',
          'weight' => 1,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_image',
      'label' => 'Icon',
      'required' => 1,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => 'wizard',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '100x100',
        'min_resolution' => '50x50',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => 3,
      ),
    ),
  );

  // Exported field: 'taxonomy_term-business_portal_wizard_sections-field_jurisdiction'.
  $fields['taxonomy_term-business_portal_wizard_sections-field_jurisdiction'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_jurisdiction',
      'foreign keys' => array(),
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
    ),
    'field_instance' => array(
      'bundle' => 'business_portal_wizard_sections',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'quickedit' => array(
              'editor' => 'form',
            ),
          ),
          'type' => 'list_default',
          'weight' => 2,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_jurisdiction',
      'label' => 'Jurisdiction',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 4,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Color');
  t('Hex html color - #FFF or #000000');
  t('Icon');
  t('Jurisdiction');

  return $fields;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function sbp_wizard_defaultconfig_strongarm() {
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

/**
 * Implements hook_defaultconfig_taxonomy_default_vocabularies().
 */
function sbp_wizard_defaultconfig_taxonomy_default_vocabularies() {
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

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function sbp_wizard_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer taxonomy_term business_portal_wizard_sections defaults'.
  $permissions['administer panelizer taxonomy_term business_portal_wizard_sections defaults'] = array(
    'name' => 'administer panelizer taxonomy_term business_portal_wizard_sections defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'delete terms in business_portal_wizard_sections'.
  $permissions['delete terms in business_portal_wizard_sections'] = array(
    'name' => 'delete terms in business_portal_wizard_sections',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in business_portal_wizard_sections'.
  $permissions['edit terms in business_portal_wizard_sections'] = array(
    'name' => 'edit terms in business_portal_wizard_sections',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
