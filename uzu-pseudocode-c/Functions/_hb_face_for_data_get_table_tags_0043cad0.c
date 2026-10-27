// Function : _hb_face_for_data_get_table_tags
// Namespace: 
// Entry    : 0043cad0
// Prototype: ushort _hb_face_for_data_get_table_tags(undefined8 param_1, uint param_2, uint * param_3, uint * param_4, long * param_5)
// Body     : 0043cad0 - 0043cba9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* _hb_face_for_data_get_table_tags(hb_face_t const*, unsigned int, unsigned int*, unsigned int*,
   void*) */

ushort __cdecl
_hb_face_for_data_get_table_tags
          (undefined8 param_1,uint param_2,uint *param_3,uint *param_4,long *param_5)

{
  uint uVar1;
  ushort uVar2;
  OpenTypeFontFile *pOVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  if (*(uint *)(*param_5 + 0x18) < 4) {
    pOVar3 = (OpenTypeFontFile *)&_hb_NullPool;
  }
  else {
    pOVar3 = *(OpenTypeFontFile **)(*param_5 + 0x10);
  }
  pOVar3 = OT::OpenTypeFontFile::get_face(pOVar3,(uint)*(ushort *)(param_5 + 1),(int *)0x0);
  if (param_3 == (uint *)0x0) {
    uVar2 = *(ushort *)(pOVar3 + 4) << 8 | *(ushort *)(pOVar3 + 4) >> 8;
  }
  else {
    uVar2 = *(ushort *)(pOVar3 + 4) << 8 | *(ushort *)(pOVar3 + 4) >> 8;
    uVar4 = uVar2 - param_2;
    if (uVar2 < param_2) {
      uVar4 = 0;
    }
    if (*param_3 < uVar4) {
      uVar4 = *param_3;
    }
    *param_3 = uVar4;
    if (uVar4 != 0) {
      pOVar3 = pOVar3 + (ulong)param_2 * 0x10 + 0xc;
      uVar6 = 1;
      uVar7 = uVar4;
      do {
        uVar1 = *(uint *)pOVar3;
        puVar5 = param_4;
        if (uVar6 == 0) {
          _hb_CrapPool._0_4_ = 0;
          puVar5 = (uint *)&_hb_CrapPool;
        }
        *puVar5 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        bVar8 = uVar7 == 0;
        uVar6 = uVar7 - 1;
        uVar1 = uVar6;
        if (bVar8) {
          uVar6 = 0;
          uVar1 = uVar7;
        }
        uVar7 = uVar1;
        param_4 = param_4 + !bVar8;
        pOVar3 = pOVar3 + 0x10;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return uVar2;
}


