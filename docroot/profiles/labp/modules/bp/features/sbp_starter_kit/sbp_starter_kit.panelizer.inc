<?php
/**
 * @file
 * sbp_starter_kit.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function sbp_starter_kit_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:sbp_starter_kit:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'sbp_starter_kit';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ca5adb18-62d1-41f0-985d-d9aa8bfa74d0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-66172876-ea54-4494-a827-9993bdc86518';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '66172876-ea54-4494-a827-9993bdc86518';
    $display->content['new-66172876-ea54-4494-a827-9993bdc86518'] = $pane;
    $display->panels['left'][0] = 'new-66172876-ea54-4494-a827-9993bdc86518';
    $pane = new stdClass();
    $pane->pid = 'new-1ecaebd6-981d-45a0-accf-66118c8442ac';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'plain_text',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1ecaebd6-981d-45a0-accf-66118c8442ac';
    $display->content['new-1ecaebd6-981d-45a0-accf-66118c8442ac'] = $pane;
    $display->panels['right'][0] = 'new-1ecaebd6-981d-45a0-accf-66118c8442ac';
    $pane = new stdClass();
    $pane->pid = 'new-37bf5917-b920-4dad-bb15-3d674d024df1';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_guides';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '37bf5917-b920-4dad-bb15-3d674d024df1';
    $display->content['new-37bf5917-b920-4dad-bb15-3d674d024df1'] = $pane;
    $display->panels['right'][1] = 'new-37bf5917-b920-4dad-bb15-3d674d024df1';
    $pane = new stdClass();
    $pane->pid = 'new-28f9fbc1-7387-4204-928f-7a5d7214dee7';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_document';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'file_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '28f9fbc1-7387-4204-928f-7a5d7214dee7';
    $display->content['new-28f9fbc1-7387-4204-928f-7a5d7214dee7'] = $pane;
    $display->panels['right'][2] = 'new-28f9fbc1-7387-4204-928f-7a5d7214dee7';
    $pane = new stdClass();
    $pane->pid = 'new-18d068d6-2fe0-40ac-8da5-2ce43c913d59';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_documents';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'file_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '18d068d6-2fe0-40ac-8da5-2ce43c913d59';
    $display->content['new-18d068d6-2fe0-40ac-8da5-2ce43c913d59'] = $pane;
    $display->panels['right'][3] = 'new-18d068d6-2fe0-40ac-8da5-2ce43c913d59';
    $pane = new stdClass();
    $pane->pid = 'new-c9f02573-7978-4a3b-a934-4372c83bbb08';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_permits';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c9f02573-7978-4a3b-a934-4372c83bbb08';
    $display->content['new-c9f02573-7978-4a3b-a934-4372c83bbb08'] = $pane;
    $display->panels['right'][4] = 'new-c9f02573-7978-4a3b-a934-4372c83bbb08';
    $pane = new stdClass();
    $pane->pid = 'new-b9516563-8c7d-4283-bcb9-5c005836e17d';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_resources';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
        'quickedit' => array(
          'editor' => 'form',
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'b9516563-8c7d-4283-bcb9-5c005836e17d';
    $display->content['new-b9516563-8c7d-4283-bcb9-5c005836e17d'] = $pane;
    $display->panels['right'][5] = 'new-b9516563-8c7d-4283-bcb9-5c005836e17d';
    $pane = new stdClass();
    $pane->pid = 'new-0b61a409-3060-423b-8044-e4d537d68a73';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_starter_kit_key_points';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'field_collection_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'add' => 'Add',
        'delete' => 'Delete',
        'description' => TRUE,
        'edit' => 'Edit',
        'quickedit' => array(
          'editor' => 'form',
        ),
        'view_mode' => 'full',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '0b61a409-3060-423b-8044-e4d537d68a73';
    $display->content['new-0b61a409-3060-423b-8044-e4d537d68a73'] = $pane;
    $display->panels['right'][6] = 'new-0b61a409-3060-423b-8044-e4d537d68a73';
    $pane = new stdClass();
    $pane->pid = 'new-c476ae30-69e5-466c-a102-f6fb98e76163';
    $pane->panel = 'top';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c476ae30-69e5-466c-a102-f6fb98e76163';
    $display->content['new-c476ae30-69e5-466c-a102-f6fb98e76163'] = $pane;
    $display->panels['top'][0] = 'new-c476ae30-69e5-466c-a102-f6fb98e76163';
    $pane = new stdClass();
    $pane->pid = 'new-28b14577-ecd3-454b-bc44-3ca39c7ecc65';
    $pane->panel = 'top';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'vid:10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'fieldable_panels_pane' => (object) array(
        'bundle' => 'hero',
        'language' => '',
        'is_new' => TRUE,
        'title' => 'Hero',
        'link' => 0,
        'path' => '',
        'reusable' => 0,
        'admin_title' => '',
        'admin_description' => '',
        'category' => 'Reusable panes',
        'vid' => '10',
        'current_vid' => '',
        'revision' => 1,
        'fpid' => '8',
        'field_background' => array(
          'und' => array(
            0 => array(
              'value' => 0,
            ),
          ),
        ),
        'field_background_color' => array(
          'und' => array(
            0 => array(
              'value' => 'ffffff',
            ),
          ),
        ),
        'field_background_image' => array(
          'und' => array(),
        ),
        'field_calls_to_action' => array(
          'und' => array(),
        ),
        'field_icon' => array(
          'und' => array(),
        ),
        'field_line_and_subtitle_color' => array(
          'und' => array(
            0 => array(
              'value' => 'ffffff',
            ),
          ),
        ),
        'field_subtitle_1' => array(
          'und' => array(),
        ),
        'field_subtitle_2' => array(
          'und' => array(),
        ),
        'field_width' => array(
          'und' => array(),
        ),
        'log' => '',
        'created' => 1460514034,
        'timestamp' => 1460514034,
        'changed' => 1460514034,
        'uuid' => '',
        'uid' => '1',
        'vuuid' => '',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '28b14577-ecd3-454b-bc44-3ca39c7ecc65';
    $display->content['new-28b14577-ecd3-454b-bc44-3ca39c7ecc65'] = $pane;
    $display->panels['top'][1] = 'new-28b14577-ecd3-454b-bc44-3ca39c7ecc65';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-1ecaebd6-981d-45a0-accf-66118c8442ac';
  $panelizer->display = $display;
  $export['node:sbp_starter_kit:default'] = $panelizer;

  return $export;
}
