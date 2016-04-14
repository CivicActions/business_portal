<?php
/**
 * @file
 * sbp_landing_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function sbp_landing_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:sbp_landing_page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'sbp_landing_page';
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
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f9e5ccf9-2f91-4ddf-b884-568bae4826f0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-38f813ea-5dfd-4bf8-9028-1608479626ed';
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
    $pane->uuid = '38f813ea-5dfd-4bf8-9028-1608479626ed';
    $display->content['new-38f813ea-5dfd-4bf8-9028-1608479626ed'] = $pane;
    $display->panels['left'][0] = 'new-38f813ea-5dfd-4bf8-9028-1608479626ed';
    $pane = new stdClass();
    $pane->pid = 'new-35afaf58-0e9b-4a8d-9437-939eaaee9fc8';
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
    $pane->uuid = '35afaf58-0e9b-4a8d-9437-939eaaee9fc8';
    $display->content['new-35afaf58-0e9b-4a8d-9437-939eaaee9fc8'] = $pane;
    $display->panels['right'][0] = 'new-35afaf58-0e9b-4a8d-9437-939eaaee9fc8';
    $pane = new stdClass();
    $pane->pid = 'new-8c9065bf-8190-4995-b293-c02bbc06ba5c';
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
    $pane->uuid = '8c9065bf-8190-4995-b293-c02bbc06ba5c';
    $display->content['new-8c9065bf-8190-4995-b293-c02bbc06ba5c'] = $pane;
    $display->panels['top'][0] = 'new-8c9065bf-8190-4995-b293-c02bbc06ba5c';
    $pane = new stdClass();
    $pane->pid = 'new-dedae91e-18bc-41ab-a698-172af343dcad';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_hero';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'field_collection_fields',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'full',
      ),
      'context' => array(),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dedae91e-18bc-41ab-a698-172af343dcad';
    $display->content['new-dedae91e-18bc-41ab-a698-172af343dcad'] = $pane;
    $display->panels['top'][1] = 'new-dedae91e-18bc-41ab-a698-172af343dcad';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-35afaf58-0e9b-4a8d-9437-939eaaee9fc8';
  $panelizer->display = $display;
  $export['node:sbp_landing_page:default'] = $panelizer;

  return $export;
}
