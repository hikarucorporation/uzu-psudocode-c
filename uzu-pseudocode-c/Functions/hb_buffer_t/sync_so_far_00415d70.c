// Function : sync_so_far
// Namespace: hb_buffer_t
// Entry    : 00415d70
// Prototype: int sync_so_far(hb_buffer_t * this)
// Body     : 00415d70 - 00415dae


/* hb_buffer_t::sync_so_far() */

int __thiscall hb_buffer_t::sync_so_far(hb_buffer_t *this)

{
  hb_buffer_t hVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  hVar1 = this[0x5a];
  iVar2 = *(int *)(this + 0x5c);
  iVar4 = *(int *)(this + 100);
  uVar3 = sync(this);
  if ((char)uVar3 == '\0') {
    iVar4 = iVar2;
  }
  *(int *)(this + 0x5c) = iVar4;
  if (hVar1 != (hb_buffer_t)0x0) {
    this[0x5a] = (hb_buffer_t)0x1;
    *(int *)(this + 100) = iVar4;
  }
  return iVar4 - iVar2;
}


