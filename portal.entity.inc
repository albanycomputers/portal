<?php


class Portal extends Entity {
    public $gid;

    /**
     * Implements EntityInterface::id().
     */
    public function gid() {
        return $this->portal_gid;
      }

    /**
     * Implements EntityInterface::entityType().
     */
    public function entityType() {
      return 'portal';
    }

    /**
     * Implements EntityInterface::label().
     */
    public function label() {
      return 'label';
    }

    /**
     * Implements EntityInterface::uri().
     */
    public function uri() {
      return array(
        'path' => 'portal/' . $this->gid,
      );
    }
  }