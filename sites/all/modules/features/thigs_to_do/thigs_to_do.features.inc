<?php
/**
 * @file
 * thigs_to_do.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function thigs_to_do_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function thigs_to_do_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
