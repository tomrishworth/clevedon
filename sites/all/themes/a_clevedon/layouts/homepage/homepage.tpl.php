<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a two column panel display layout, with
 * each column roughly equal in width.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left']: Content in the left column.
 *   - $content['right']: Content in the right column.
 */
?>
<div class="region-one">
<?php print $content['one']; ?>
</div>

<div class="region-two">
<?php print $content['two']; ?>
</div>

<div class="region-three">
<?php print $content['three']; ?>
</div>

<div class="region-four">
<?php print $content['four']; ?>
</div>
