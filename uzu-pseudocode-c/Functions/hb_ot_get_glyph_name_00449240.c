// Function : hb_ot_get_glyph_name
// Namespace: 
// Entry    : 00449240
// Prototype: bool hb_ot_get_glyph_name(undefined8 param_1, long * param_2, uint param_3, char * param_4, int param_5)
// Body     : 00449240 - 004494e8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ot_get_glyph_name(hb_font_t*, void*, unsigned int, char*, unsigned int, void*) */

bool __cdecl
hb_ot_get_glyph_name(undefined8 param_1,long *param_2,uint param_3,char *param_4,int param_5)

{
  int iVar1;
  undefined8 *puVar2;
  hb_face_t *phVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  accelerator_t *this;
  accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
  *paVar7;
  undefined1 *puVar8;
  ulong uVar9;
  char *pcVar10;
  ulong __n;
  bool bVar11;
  undefined1 auVar12 [16];
  
  puVar2 = (undefined8 *)*param_2;
  do {
    while( true ) {
      this = (accelerator_t *)puVar2[7];
      if (this != (accelerator_t *)0x0) goto LAB_004492be;
      phVar3 = (hb_face_t *)*puVar2;
      if (phVar3 == (hb_face_t *)0x0) goto LAB_004492b7;
      this = calloc(1,0x38);
      if (this == (accelerator_t *)0x0) break;
      OT::post::accelerator_t::accelerator_t(this,phVar3);
      LOCK();
      bVar11 = puVar2[7] == 0;
      if (bVar11) {
        puVar2[7] = this;
      }
      UNLOCK();
      if (bVar11) goto LAB_004492be;
      OT::post::accelerator_t::~accelerator_t(this);
      free(this);
    }
    LOCK();
    bVar11 = puVar2[7] == 0;
    if (bVar11) {
      puVar2[7] = &_hb_NullPool;
    }
    UNLOCK();
  } while (!bVar11);
LAB_004492b7:
  this = (accelerator_t *)&_hb_NullPool;
LAB_004492be:
  if (*(int *)(this + 8) == 0x20000) {
    uVar5 = **(ushort **)(this + 0x10);
    if (param_3 < (ushort)(uVar5 << 8 | uVar5 >> 8)) {
      uVar5 = (*(ushort **)(this + 0x10))[(ulong)param_3 + 1];
      uVar5 = uVar5 << 8 | uVar5 >> 8;
      uVar6 = (uint)uVar5;
      if (uVar5 < 0x102) {
        pcVar10 = ".notdef" + *(uint *)(format1_names_msgidx + (ulong)uVar6 * 4);
        uVar6 = ~*(uint *)(format1_names_msgidx + (ulong)uVar6 * 4) +
                *(int *)(format1_names_msgidx + (ulong)uVar6 * 4 + 4);
      }
      else {
        if (*(uint *)(this + 0x1c) <= uVar6 - 0x102) goto LAB_004493aa;
        uVar9 = (ulong)*(uint *)(*(long *)(this + 0x20) + (ulong)(uVar6 - 0x102) * 4);
        uVar6 = (uint)*(byte *)(*(long *)(this + 0x28) + uVar9);
        pcVar10 = (char *)(*(long *)(this + 0x28) + uVar9 + 1);
      }
joined_r0x00449351:
      if (uVar6 != 0) {
        if (param_5 == 0) {
          return true;
        }
        uVar4 = param_5 - 1U;
        if (uVar6 < param_5 - 1U) {
          uVar4 = uVar6;
        }
        strncpy(param_4,pcVar10,(ulong)uVar4);
        param_4[uVar4] = '\0';
        return true;
      }
    }
  }
  else if ((*(int *)(this + 8) == 0x10000) && (param_3 < 0x102)) {
    pcVar10 = ".notdef" + *(uint *)(format1_names_msgidx + (ulong)param_3 * 4);
    uVar6 = ~*(uint *)(format1_names_msgidx + (ulong)param_3 * 4) +
            *(int *)(format1_names_msgidx + (ulong)param_3 * 4 + 4);
    goto joined_r0x00449351;
  }
LAB_004493aa:
  paVar7 = hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>
           ::get((hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>
                  *)(puVar2 + 0x10));
  if (*(uint *)(paVar7 + 0x128) <= param_3) {
    return false;
  }
  if (*(long *)(paVar7 + 0x40) == 0) {
    return false;
  }
  if (*(int *)(paVar7 + 0xdc) != -1) {
    return false;
  }
  if (param_5 == 0) {
    return true;
  }
  if (*(Charset **)(paVar7 + 0x50) == (Charset *)&_hb_NullPool) {
    iVar1 = *(int *)(paVar7 + 0xf4);
    uVar6 = 0;
    if (iVar1 == 2) {
      if (param_3 < 0x57) {
        puVar8 = expert_subset_charset_to_sid;
LAB_0044947c:
        uVar6 = (uint)*(ushort *)(puVar8 + (ulong)param_3 * 2);
        goto joined_r0x00449485;
      }
    }
    else if (iVar1 == 1) {
      if (param_3 < 0xa6) {
        puVar8 = expert_charset_to_sid;
        goto LAB_0044947c;
      }
    }
    else if ((iVar1 == 0) && (uVar6 = 0, param_3 < 0xe5)) {
      uVar6 = param_3;
    }
  }
  else {
    uVar6 = CFF::Charset::get_sid
                      (*(Charset **)(paVar7 + 0x50),param_3,*(uint *)(paVar7 + 0x128),(uint *)0x0);
joined_r0x00449485:
    if (0x186 < uVar6) {
      auVar12 = OT::CFFIndex<OT::IntType<unsigned_short,2u>>::operator[]
                          (*(CFFIndex<OT::IntType<unsigned_short,2u>> **)(paVar7 + 0x68),
                           uVar6 - 0x187);
      pcVar10 = auVar12._0_8_;
      uVar9 = auVar12._8_8_ & 0xffffffff;
      goto joined_r0x004494ab;
    }
  }
  pcVar10 = ".notdef" + (uint)(&cff1_std_strings_msgidx)[uVar6];
  uVar9 = (ulong)(uint)(~(&cff1_std_strings_msgidx)[uVar6] + (&DAT_005f6d24)[uVar6]);
joined_r0x004494ab:
  if (uVar9 != 0) {
    __n = (ulong)(param_5 - 1);
    if (uVar9 < param_5 - 1) {
      __n = uVar9;
    }
    strncpy(param_4,pcVar10,__n);
    param_4[__n] = '\0';
  }
  return uVar9 != 0;
}


