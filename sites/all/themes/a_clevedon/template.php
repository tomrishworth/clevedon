<?php
/**
  * Implements hook_preprocess_html()
  */
function a_clevedon_preprocess_html(&$vars) {
  // Be sure replace this with a custom Modernizr build!
  drupal_add_js(drupal_get_path('theme', 'a_clevedon') . '/javascripts/modernizr-2.5.3.js', array('force header' => true));
  
  // yep/nope for conditional JS loading!
  drupal_add_js(drupal_get_path('theme', 'a_clevedon') . '/javascripts/loader.js');

  // typekit
  drupal_add_js(drupal_get_path('theme', 'a_clevedon') . '/javascripts/typekit.js');

  // directory
  drupal_add_js(drupal_get_path('theme', 'a_clevedon') . '/javascripts/directory.js');
  
  // Flexnav
  drupal_add_js(drupal_get_path('theme', 'a_clevedon') . '/javascripts/jquery.flexnav-min.js');
  
  // Easy Accordion
  drupal_add_js(drupal_get_path('theme', 'a_clevedon') . '/javascripts/jquery.easyaccordion.js');
  
  drupal_add_js(drupal_get_path('theme', 'a_clevedon') . '/javascripts/jquery.ba-resize.min.js');
  
  // Clevedon js
  drupal_add_js(drupal_get_path('theme', 'a_clevedon') . '/javascripts/clevedon.js');
}



// Remove Panel Separator from Panel layouts
function a_clevedon_panels_default_style_render_region($vars) {
  $output = '';
  $output .= implode('', $vars['panes']);
  return $output;
}
