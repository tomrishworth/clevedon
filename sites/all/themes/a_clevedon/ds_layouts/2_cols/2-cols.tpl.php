<?php
/**
 * @file
 * Display Suite 2 Cols template.
 *
 * Available variables:
 *
 * Layout:
 * - $classes: String of classes that can be used to style this layout.
 * - $contextual_links: Renderable array of contextual links.
 * - $layout_wrapper: wrapper surrounding the layout.
 *
 * Regions:
 *
 * - $col_1: Rendered content for the "Col 1" region.
 * - $col_1_classes: String of classes that can be used to style the "Col 1" region.
 *
 * - $col_2: Rendered content for the "Col 2" region.
 * - $col_2_classes: String of classes that can be used to style the "Col 2" region.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> clearfix">

  <!-- Needed to activate contextual links -->
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

    <<?php print $col_1_wrapper; ?> class="ds-col-1<?php print $col_1_classes; ?>">
      <?php print $col_1; ?>
    </<?php print $col_1_wrapper; ?>>

    <<?php print $col_2_wrapper; ?> class="ds-col-2<?php print $col_2_classes; ?>">
      <?php print $col_2; ?>
    </<?php print $col_2_wrapper; ?>>

</<?php print $layout_wrapper ?>>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
