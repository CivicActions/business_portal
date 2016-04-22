<?php

/**
 * @file
 * Generic Implementation for 70:30 2-col stacked layouts.
 */

// Plugin definition.
$plugin = array(
  'title' => t('LASBP 2-col Stacked Layout'),
  'category' => t('lasbp Panel Layouts'),
  'icon' => 'lasbp_2colstacked.png',
  'theme' => 'lasbp_2colstacked',
  'css' => '../../css/layouts/panels-layouts/lasbp_2colstacked.css',
  'regions' => array(
    'top'       => t('Top'),
    'sidebar'       => t('Sidebar'),
    'main_top'  => t('Main Top'),
    'main_bottom'  => t('Main bottom'),
    'footer'  => t('Footer'),
  ),
);
