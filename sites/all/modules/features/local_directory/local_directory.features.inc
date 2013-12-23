<?php
/**
 * @file
 * local_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function local_directory_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function local_directory_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function local_directory_node_info() {
  $items = array(
    'business_lisiting' => array(
      'name' => t('Business Lisiting'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Business Name'),
      'help' => '',
    ),
  );
  return $items;
}
