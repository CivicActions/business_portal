<?php
/**
 * @file
 * sbp_department.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function sbp_department_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:sbp_department:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'sbp_department';
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
  $display->uuid = '3526857c-1638-43f5-a102-4962d6000c81';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f8bcaf72-ed1e-42d2-a54a-3e6fed27a776';
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
    $pane->uuid = 'f8bcaf72-ed1e-42d2-a54a-3e6fed27a776';
    $display->content['new-f8bcaf72-ed1e-42d2-a54a-3e6fed27a776'] = $pane;
    $display->panels['left'][0] = 'new-f8bcaf72-ed1e-42d2-a54a-3e6fed27a776';
    $pane = new stdClass();
    $pane->pid = 'new-cb682fad-ff5c-46d8-b42c-9739147b5e9d';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_description';
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
    $pane->uuid = 'cb682fad-ff5c-46d8-b42c-9739147b5e9d';
    $display->content['new-cb682fad-ff5c-46d8-b42c-9739147b5e9d'] = $pane;
    $display->panels['right'][0] = 'new-cb682fad-ff5c-46d8-b42c-9739147b5e9d';
    $pane = new stdClass();
    $pane->pid = 'new-3b9dcaf0-c161-466c-9e49-0c51c7187c05';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_addresses';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3b9dcaf0-c161-466c-9e49-0c51c7187c05';
    $display->content['new-3b9dcaf0-c161-466c-9e49-0c51c7187c05'] = $pane;
    $display->panels['right'][1] = 'new-3b9dcaf0-c161-466c-9e49-0c51c7187c05';
    $pane = new stdClass();
    $pane->pid = 'new-399a6206-9c84-4ce4-919c-cde39f9354b4';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
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
    $pane->uuid = '399a6206-9c84-4ce4-919c-cde39f9354b4';
    $display->content['new-399a6206-9c84-4ce4-919c-cde39f9354b4'] = $pane;
    $display->panels['right'][2] = 'new-399a6206-9c84-4ce4-919c-cde39f9354b4';
    $pane = new stdClass();
    $pane->pid = 'new-a892d50a-bf7c-4b9a-8c7a-26fed0b17a88';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_phone';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a892d50a-bf7c-4b9a-8c7a-26fed0b17a88';
    $display->content['new-a892d50a-bf7c-4b9a-8c7a-26fed0b17a88'] = $pane;
    $display->panels['right'][3] = 'new-a892d50a-bf7c-4b9a-8c7a-26fed0b17a88';
    $pane = new stdClass();
    $pane->pid = 'new-6553d2b8-094d-4844-95fd-42b373fe62d7';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_department_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->uuid = '6553d2b8-094d-4844-95fd-42b373fe62d7';
    $display->content['new-6553d2b8-094d-4844-95fd-42b373fe62d7'] = $pane;
    $display->panels['right'][4] = 'new-6553d2b8-094d-4844-95fd-42b373fe62d7';
    $pane = new stdClass();
    $pane->pid = 'new-d9f38ee8-9c40-4a70-a640-704cc5f0791c';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_secondary_feature';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->uuid = 'd9f38ee8-9c40-4a70-a640-704cc5f0791c';
    $display->content['new-d9f38ee8-9c40-4a70-a640-704cc5f0791c'] = $pane;
    $display->panels['right'][5] = 'new-d9f38ee8-9c40-4a70-a640-704cc5f0791c';
    $pane = new stdClass();
    $pane->pid = 'new-9e62454b-1a3f-49b1-9d95-1a38b2583ce1';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_main_feature';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->uuid = '9e62454b-1a3f-49b1-9d95-1a38b2583ce1';
    $display->content['new-9e62454b-1a3f-49b1-9d95-1a38b2583ce1'] = $pane;
    $display->panels['right'][6] = 'new-9e62454b-1a3f-49b1-9d95-1a38b2583ce1';
    $pane = new stdClass();
    $pane->pid = 'new-f46e8305-da76-4cde-98d1-1ba598633fc0';
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
    $pane->uuid = 'f46e8305-da76-4cde-98d1-1ba598633fc0';
    $display->content['new-f46e8305-da76-4cde-98d1-1ba598633fc0'] = $pane;
    $display->panels['top'][0] = 'new-f46e8305-da76-4cde-98d1-1ba598633fc0';
    $pane = new stdClass();
    $pane->pid = 'new-d2a3130a-08d5-4390-8e89-fba6de49a0a6';
    $pane->panel = 'top';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'vid:13';
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
        'vid' => '13',
        'current_vid' => '',
        'revision' => 1,
        'fpid' => '11',
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
        'created' => 1460515516,
        'timestamp' => 1460515516,
        'changed' => 1460515516,
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
    $pane->uuid = 'd2a3130a-08d5-4390-8e89-fba6de49a0a6';
    $display->content['new-d2a3130a-08d5-4390-8e89-fba6de49a0a6'] = $pane;
    $display->panels['top'][1] = 'new-d2a3130a-08d5-4390-8e89-fba6de49a0a6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-cb682fad-ff5c-46d8-b42c-9739147b5e9d';
  $panelizer->display = $display;
  $export['node:sbp_department:default'] = $panelizer;

  return $export;
}
