// Function : load_num_glyphs
// Namespace: hb_face_t
// Entry    : 003d0530
// Prototype: undefined load_num_glyphs(hb_face_t * this)
// Body     : 003d0530 - 003d05bf


/* hb_face_t::load_num_glyphs() const */

void __thiscall hb_face_t::load_num_glyphs(hb_face_t *this)

{
  ushort uVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  
  piVar3 = *(int **)(this + 0x78);
  if (piVar3 == (int *)0x0) {
    do {
      piVar3 = &_hb_NullPool;
      if (*(long *)(this + 0x68) == 0) goto LAB_003d0543;
      piVar3 = hb_table_lazy_loader_t<OT::maxp,2u,true>::create(*(long *)(this + 0x68));
      if (piVar3 == (int *)0x0) {
        piVar3 = &_hb_NullPool;
        LOCK();
        bVar5 = *(long *)(this + 0x78) == 0;
        if (bVar5) {
          *(undefined4 **)(this + 0x78) = &_hb_NullPool;
        }
        UNLOCK();
      }
      else {
        LOCK();
        bVar5 = *(long *)(this + 0x78) == 0;
        if (bVar5) {
          *(int **)(this + 0x78) = piVar3;
        }
        UNLOCK();
      }
      if (bVar5) goto LAB_003d0543;
      hb_lazy_loader_t<OT::maxp,hb_table_lazy_loader_t<OT::maxp,2u,true>,hb_face_t,2u,hb_blob_t>::
      do_destroy(piVar3);
      piVar3 = *(int **)(this + 0x78);
    } while (piVar3 == (int *)0x0);
  }
LAB_003d0543:
  if ((uint)piVar3[6] < 6) {
    puVar2 = &_hb_NullPool;
  }
  else {
    puVar2 = *(undefined4 **)(piVar3 + 4);
  }
  uVar1 = *(ushort *)(puVar2 + 1);
  uVar4 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  *(uint *)(this + 0x18) = uVar4;
  return;
}


