<?php
/**
 * @file
 * local_directory.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function local_directory_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'listing_slides';
  $preset->title = 'Listing slides';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'listing_slide_large';
  $preset->imagestyle_thumbnail = 'flexslider_thumbnail';
  $preset->options = '';
  $export['listing_slides'] = $preset;

  return $export;
}
