<?php
/**
 * @file
 * Returns the HTML for the footer region.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728140
 */
?>
<?php if ($content): ?>
  <footer id="footer" class="<?php print $classes; ?>">



    <div class="footer__links">
      <?php print $content; ?>
    </div>
    <div class="footer__copyright">© 2016 All rights reserved</div>
    <div class="footer__credits">Site by <a href="http://www.tomorrowpartners.com/">Tomorrow Partners</a> + <a href="https://civicactions.com/">Civic Actions</a>
    </div>


  </footer>
<?php endif; ?>
