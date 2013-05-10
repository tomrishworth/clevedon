<?php

/**
 * @file
 * Display Suite 2 Cols configuration.
 */

function ds_2_cols() {
  return array(
    'label' => t('2 Cols'),
    'regions' => array(
      'col_1' => t('Col 1'),
      'col_2' => t('Col 2'),
    ),
    // Uncomment if you want to include a CSS file for this layout (2_cols.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (2_cols.png)
    // 'image' => TRUE,
  );
}
