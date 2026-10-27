// Function : hb_aat_apply_context_t
// Namespace: AAT:hb_aat_apply_context_t
// Entry    : 003cec20
// Prototype: undefined hb_aat_apply_context_t(hb_aat_apply_context_t * this, undefined8 param_1, long param_2, undefined4 * param_3, GDEFVersion1_2<OT::Layout::SmallTypes> * param_4)
// Body     : 003cec20 - 003cedd5


/* AAT::hb_aat_apply_context_t::hb_aat_apply_context_t(hb_ot_shape_plan_t const*, hb_font_t*,
   hb_buffer_t*, hb_blob_t*) */

void __thiscall
AAT::hb_aat_apply_context_t::hb_aat_apply_context_t
          (hb_aat_apply_context_t *this,undefined8 param_1,long param_2,undefined4 *param_3,
          GDEFVersion1_2<OT::Layout::SmallTypes> *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  accelerator_t *this_00;
  undefined4 *puVar5;
  undefined8 extraout_RDX;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 8) = param_1;
  *(long *)(this + 0x10) = param_2;
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(this + 0x18) = lVar2;
  *(undefined4 **)(this + 0x20) = param_3;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  this[0x50] = (hb_aat_apply_context_t)0x0;
  *(undefined4 *)(this + 0x60) = 0x10000;
  *(undefined2 *)(this + 100) = 0;
  puVar7 = &_hb_NullPool;
  *(undefined4 **)(this + 0x68) = &_hb_NullPool;
  pGVar6 = param_4;
  do {
    while( true ) {
      this_00 = *(accelerator_t **)(lVar2 + 0x128);
      if (this_00 != (accelerator_t *)0x0) goto LAB_003cecfc;
      lVar3 = *(long *)(lVar2 + 0x68);
      if (lVar3 == 0) goto LAB_003cecf5;
      this_00 = calloc(1,0x218);
      if (this_00 == (accelerator_t *)0x0) break;
                    /* try { // try from 003cecb7 to 003cecc1 has its CatchHandler @ 003cedd8 */
      OT::GDEF::accelerator_t::accelerator_t(this_00,lVar3,extraout_RDX,param_3,pGVar6);
      LOCK();
      bVar8 = *(long *)(lVar2 + 0x128) == 0;
      if (bVar8) {
        *(long *)(lVar2 + 0x128) = (long)this_00;
      }
      UNLOCK();
      if (bVar8) goto LAB_003cecfc;
      OT::GDEF::accelerator_t::~accelerator_t(this_00);
      free(this_00);
    }
    param_3 = &_hb_NullPool;
    LOCK();
    bVar8 = *(long *)(lVar2 + 0x128) == 0;
    if (bVar8) {
      *(long *)(lVar2 + 0x128) = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (!bVar8);
LAB_003cecf5:
  this_00 = (accelerator_t *)&_hb_NullPool;
LAB_003cecfc:
  puVar5 = *(undefined4 **)this_00;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = &_hb_NullPool;
  }
  if (3 < (uint)puVar5[6]) {
    puVar7 = *(undefined4 **)(puVar5 + 4);
  }
  *(undefined4 **)(this + 0x70) = puVar7;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x80) = 0xffffffff;
  *(undefined4 *)(this + 0x84) = 0xffffffff;
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  *(undefined4 *)(this + 0x8c) = 0xffffffff;
  *(undefined4 *)(this + 0x90) = 0xffffffff;
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  *(undefined4 *)(this + 0x98) = 0xffffffff;
  *(undefined4 *)(this + 0x9c) = 0xffffffff;
  *(undefined4 *)(this + 0xa0) = 0xffffffff;
  *(undefined4 *)(this + 0xa4) = 0xffffffff;
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  *(undefined4 *)(this + 0xac) = 0xffffffff;
  *(undefined4 *)(this + 0xb0) = 0xffffffff;
  *(undefined4 *)(this + 0xb4) = 0xffffffff;
  *(undefined4 *)(this + 0xb8) = 0xffffffff;
  *(undefined4 *)(this + 0xbc) = 0xffffffff;
  *(undefined4 *)(this + 0xc0) = 0xffffffff;
  *(undefined4 *)(this + 0xc4) = 0xffffffff;
  *(undefined4 *)(this + 200) = 0xffffffff;
  *(undefined4 *)(this + 0xcc) = 0xffffffff;
  *(undefined4 *)(this + 0xd0) = 0xffffffff;
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  *(undefined4 *)(this + 0xdc) = 0xffffffff;
  *(undefined8 *)(this + 0xe0) = 0;
  if ((param_4 != (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0) && (*(int *)param_4 != 0)) {
    LOCK();
    *(int *)param_4 = *(int *)param_4 + 1;
    UNLOCK();
  }
  *(GDEFVersion1_2<OT::Layout::SmallTypes> **)(this + 0x58) = param_4;
  this[0x50] = (hb_aat_apply_context_t)0x0;
  iVar4 = *(int *)(*(hb_face_t **)(this + 0x18) + 0x18);
  if (iVar4 == -1) {
                    /* try { // try from 003cedcb to 003cedcf has its CatchHandler @ 003cedd6 */
    iVar4 = hb_face_t::load_num_glyphs(*(hb_face_t **)(this + 0x18));
    param_4 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)(this + 0x58);
  }
  *(int *)(this + 0x60) = iVar4;
  this[100] = (hb_aat_apply_context_t)0x1;
  lVar2 = *(long *)(param_4 + 0x10);
  *(long *)(this + 0x30) = lVar2;
  uVar1 = *(uint *)(param_4 + 0x18);
  *(ulong *)(this + 0x38) = lVar2 + (ulong)uVar1;
  *(uint *)(this + 0x40) = uVar1;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x44) = 0x3fffffff;
  return;
}


