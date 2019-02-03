access_remote_vm:
    maddr = kmap(page);
    if (write) {
        copy_to_user_page(vma, page, addr,
                  maddr + offset, buf, bytes);
        set_page_dirty_lock(page);
    } else {
        /* ... snip ... */
    }
    kunmap(page);