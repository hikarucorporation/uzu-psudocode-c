// Function : create
// Namespace: hb_ucd_unicode_funcs_lazy_loader_t
// Entry    : 0043ba10
// Prototype: undefined4 * create(void)
// Body     : 0043ba10 - 0043bc60


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_ucd_unicode_funcs_lazy_loader_t::create() */

undefined4 * hb_ucd_unicode_funcs_lazy_loader_t::create(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  puVar4 = calloc(1,0xd8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = &_hb_Null_hb_unicode_funcs_t;
    iVar1 = DAT_007185f4;
  }
  else {
    *puVar4 = 1;
    puVar4[1] = 1;
    *(undefined8 *)(puVar4 + 2) = 0;
    if (DAT_007185f4 != 0) {
      DAT_007185f4 = 0;
    }
    if (_hb_Null_hb_unicode_funcs_t != 0) {
      LOCK();
      _hb_Null_hb_unicode_funcs_t = _hb_Null_hb_unicode_funcs_t + 1;
      UNLOCK();
    }
    *(int **)(puVar4 + 4) = &_hb_Null_hb_unicode_funcs_t;
    puVar2 = PTR_hb_unicode_eastasian_width_nil_00718610;
    *(undefined **)(puVar4 + 6) = PTR_hb_unicode_combining_class_nil_00718608;
    *(undefined **)(puVar4 + 8) = puVar2;
    puVar2 = PTR_hb_unicode_mirroring_nil_00718620;
    *(undefined **)(puVar4 + 10) = PTR_hb_unicode_general_category_nil_00718618;
    *(undefined **)(puVar4 + 0xc) = puVar2;
    puVar2 = PTR_hb_unicode_compose_nil_00718630;
    *(undefined **)(puVar4 + 0xe) = PTR_hb_unicode_script_nil_00718628;
    *(undefined **)(puVar4 + 0x10) = puVar2;
    puVar2 = PTR_hb_unicode_decompose_compatibility_nil_00718640;
    *(undefined **)(puVar4 + 0x12) = PTR_hb_unicode_decompose_nil_00718638;
    *(undefined **)(puVar4 + 0x14) = puVar2;
    uVar3 = uRam0000000000718650;
    *(undefined8 *)(puVar4 + 0x16) = DAT_00718648;
    *(undefined8 *)(puVar4 + 0x18) = uVar3;
    uVar3 = uRam0000000000718660;
    *(undefined8 *)(puVar4 + 0x1a) = DAT_00718658;
    *(undefined8 *)(puVar4 + 0x1c) = uVar3;
    uVar3 = uRam0000000000718670;
    *(undefined8 *)(puVar4 + 0x1e) = _DAT_00718668;
    *(undefined8 *)(puVar4 + 0x20) = uVar3;
    uVar3 = uRam0000000000718680;
    *(undefined8 *)(puVar4 + 0x22) = _DAT_00718678;
    *(undefined8 *)(puVar4 + 0x24) = uVar3;
    iVar1 = puVar4[1];
  }
  if (iVar1 != 0) {
    if (*(code **)(puVar4 + 0x26) != (code *)0x0) {
      (**(code **)(puVar4 + 0x26))(*(undefined8 *)(puVar4 + 0x16));
    }
    *(code **)(puVar4 + 6) = hb_ucd_combining_class;
    *(undefined8 *)(puVar4 + 0x16) = 0;
    *(undefined8 *)(puVar4 + 0x26) = 0;
  }
  if (puVar4[1] != 0) {
    if (*(code **)(puVar4 + 0x2a) != (code *)0x0) {
      (**(code **)(puVar4 + 0x2a))(*(undefined8 *)(puVar4 + 0x1a));
    }
    *(code **)(puVar4 + 10) = hb_ucd_general_category;
    *(undefined8 *)(puVar4 + 0x1a) = 0;
    *(undefined8 *)(puVar4 + 0x2a) = 0;
  }
  if (puVar4[1] != 0) {
    if (*(code **)(puVar4 + 0x2c) != (code *)0x0) {
      (**(code **)(puVar4 + 0x2c))(*(undefined8 *)(puVar4 + 0x1c));
    }
    *(code **)(puVar4 + 0xc) = hb_ucd_mirroring;
    *(undefined8 *)(puVar4 + 0x1c) = 0;
    *(undefined8 *)(puVar4 + 0x2c) = 0;
  }
  if (puVar4[1] != 0) {
    if (*(code **)(puVar4 + 0x2e) != (code *)0x0) {
      (**(code **)(puVar4 + 0x2e))(*(undefined8 *)(puVar4 + 0x1e));
    }
    *(code **)(puVar4 + 0xe) = hb_ucd_script;
    *(undefined8 *)(puVar4 + 0x1e) = 0;
    *(undefined8 *)(puVar4 + 0x2e) = 0;
  }
  if (puVar4[1] != 0) {
    if (*(code **)(puVar4 + 0x30) != (code *)0x0) {
      (**(code **)(puVar4 + 0x30))(*(undefined8 *)(puVar4 + 0x20));
    }
    *(code **)(puVar4 + 0x10) = hb_ucd_compose;
    *(undefined8 *)(puVar4 + 0x20) = 0;
    *(undefined8 *)(puVar4 + 0x30) = 0;
  }
  if (puVar4[1] != 0) {
    if (*(code **)(puVar4 + 0x32) != (code *)0x0) {
      (**(code **)(puVar4 + 0x32))(*(undefined8 *)(puVar4 + 0x22));
    }
    *(code **)(puVar4 + 0x12) = hb_ucd_decompose;
    *(undefined8 *)(puVar4 + 0x22) = 0;
    *(undefined8 *)(puVar4 + 0x32) = 0;
  }
  if (puVar4[1] != 0) {
    puVar4[1] = 0;
  }
  atexit(free_static_ucd_funcs);
  return puVar4;
}


