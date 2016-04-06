<?php
/**
 * @file
 * sbp_hero.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function sbp_hero_defaultconfig_features() {
  return array(
    'sbp_hero' => array(
      'field_default_fields' => 'field_default_fields',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function sbp_hero_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'fieldable_panels_pane-hero-field_background'.
  $fields['fieldable_panels_pane-hero-field_background'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_background',
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
          1 => 'Color',
          2 => 'Image',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'hero',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => 0,
      'description' => 'Select which type of background is desired.',
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
          'weight' => 6,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_background',
      'label' => 'Background',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => -4,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-hero-field_background_color'.
  $fields['fieldable_panels_pane-hero-field_background_color'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_background_color',
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
        'max_length' => 6,
      ),
      'translatable' => 0,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'hero',
      'default_value' => array(
        0 => array(
          'value' => 'ffffff',
        ),
      ),
      'deleted' => 0,
      'description' => 'Please enter the hexadecimal color code <em>without</em> the leading hash or number symbol #.',
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
          'weight' => 7,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_background_color',
      'label' => 'Background Color',
      'required' => 0,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 6,
        ),
        'type' => 'text_textfield',
        'weight' => -3,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-hero-field_background_image'.
  $fields['fieldable_panels_pane-hero-field_background_image'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_background_image',
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
      'bundle' => 'hero',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
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
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_background_image',
      'label' => 'Background Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
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
        'weight' => -2,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-hero-field_calls_to_action'.
  $fields['fieldable_panels_pane-hero-field_calls_to_action'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_calls_to_action',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => 0,
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'hero',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'link',
          'settings' => array(
            'quickedit' => array(
              'editor' => 'form',
            ),
          ),
          'type' => 'link_default',
          'weight' => 5,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_calls_to_action',
      'label' => 'Calls to Action',
      'required' => 0,
      'settings' => array(
        'absolute_url' => 1,
        'attributes' => array(
          'class' => '',
          'configurable_class' => 0,
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'rel_remove' => 'default',
        'title' => 'required',
        'title_label_use_field_label' => 0,
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => 4,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-hero-field_icon'.
  $fields['fieldable_panels_pane-hero-field_icon'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_icon',
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
      'bundle' => 'hero',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
            'quickedit' => array(
              'editor' => 'form',
            ),
          ),
          'type' => 'image',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_icon',
      'label' => 'Icon',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
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
        'weight' => -1,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-hero-field_line_and_subtitle_color'.
  $fields['fieldable_panels_pane-hero-field_line_and_subtitle_color'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_line_and_subtitle_color',
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
        'max_length' => 6,
      ),
      'translatable' => 0,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'hero',
      'default_value' => array(
        0 => array(
          'value' => 'ffffff',
        ),
      ),
      'deleted' => 0,
      'description' => 'Please enter the hexadecimal color code <em>without</em> the leading hash or number symbol #.',
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
          'weight' => 8,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_line_and_subtitle_color',
      'label' => 'Line and subtitle color',
      'required' => 0,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 6,
        ),
        'type' => 'text_textfield',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-hero-field_subtitle_1'.
  $fields['fieldable_panels_pane-hero-field_subtitle_1'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_subtitle_1',
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
        'max_length' => 255,
      ),
      'translatable' => 0,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'hero',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'quickedit' => array(
              'editor' => 'plain_text',
            ),
          ),
          'type' => 'text_default',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_subtitle_1',
      'label' => 'Subtitle 1',
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
        'weight' => 2,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-hero-field_subtitle_2'.
  $fields['fieldable_panels_pane-hero-field_subtitle_2'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_subtitle_2',
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
        'max_length' => 255,
      ),
      'translatable' => 0,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'hero',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'quickedit' => array(
              'editor' => 'plain_text',
            ),
          ),
          'type' => 'text_default',
          'weight' => 4,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_subtitle_2',
      'label' => 'Subtitle 2',
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
        'weight' => 3,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-hero-field_width'.
  $fields['fieldable_panels_pane-hero-field_width'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_width',
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
          1 => 'Full',
          2 => 'Half',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'hero',
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
          'weight' => 9,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_width',
      'label' => 'Width',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 1,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Background');
  t('Background Color');
  t('Background Image');
  t('Calls to Action');
  t('Icon');
  t('Line and subtitle color');
  t('Please enter the hexadecimal color code <em>without</em> the leading hash or number symbol #.');
  t('Select which type of background is desired.');
  t('Subtitle 1');
  t('Subtitle 2');
  t('Width');

  return $fields;
}
