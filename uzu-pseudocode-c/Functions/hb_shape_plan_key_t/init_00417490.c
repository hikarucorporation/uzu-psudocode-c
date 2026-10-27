// Function : init
// Namespace: hb_shape_plan_key_t
// Entry    : 00417490
// Prototype: undefined8 init(undefined8 * param_1, char param_2, long param_3, undefined8 * param_4, void * param_5, uint param_6, long param_7, uint param_8)
// Body     : 00417490 - 0041777e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_shape_plan_key_t::init(bool, hb_face_t*, hb_segment_properties_t const*, hb_feature_t const*,
   unsigned int, int const*, unsigned int, char const* const*) */

undefined8 __cdecl
hb_shape_plan_key_t::init
          (undefined8 *param_1,char param_2,long param_3,undefined8 *param_4,void *param_5,
          uint param_6,long param_7,uint param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  void *__dest;
  char *pcVar6;
  undefined8 *__ptr;
  int iVar7;
  uint uVar8;
  bool bVar9;
  
  if ((param_6 == 0) || (param_2 == '\0')) {
    uVar1 = *param_4;
    uVar2 = param_4[1];
    uVar3 = param_4[3];
    param_1[2] = param_4[2];
    param_1[3] = uVar3;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    *(uint *)(param_1 + 5) = param_6;
    __dest = (void *)0x0;
    if (param_2 != '\0') {
      param_5 = (void *)0x0;
    }
    param_1[4] = param_5;
  }
  else {
    __dest = calloc((ulong)param_6,0x10);
    if (__dest == (void *)0x0) {
      __dest = (void *)0x0;
      goto LAB_004176cd;
    }
    uVar1 = *param_4;
    uVar2 = param_4[1];
    uVar3 = param_4[3];
    param_1[2] = param_4[2];
    param_1[3] = uVar3;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    *(uint *)(param_1 + 5) = param_6;
    param_1[4] = __dest;
    memcpy(__dest,param_5,(ulong)param_6 << 4);
    iVar7 = *(int *)((long)__dest + 8);
    iVar5 = *(int *)((long)__dest + 0xc);
    if (param_6 != 1) {
      uVar8 = param_6 & 0xfffffffe;
      do {
        while( true ) {
          if (iVar7 != 0) {
            *(undefined4 *)((long)__dest + 8) = 1;
          }
          if (iVar5 != -1) {
            *(undefined4 *)((long)__dest + 0xc) = 2;
          }
          if (iVar7 == 0) break;
          *(undefined4 *)((long)__dest + 8) = 1;
          iVar7 = 1;
          if (iVar5 != -1) goto LAB_00417520;
LAB_00417567:
          iVar5 = -1;
          uVar8 = uVar8 - 2;
          if (uVar8 == 0) goto LAB_00417571;
        }
        iVar7 = 0;
        if (iVar5 == -1) goto LAB_00417567;
LAB_00417520:
        *(undefined4 *)((long)__dest + 0xc) = 2;
        iVar5 = 2;
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
LAB_00417571:
      if ((param_6 & 1) == 0) goto LAB_004175c0;
    }
    if (iVar7 != 0) {
      *(undefined4 *)((long)__dest + 8) = 1;
    }
    if (iVar5 != -1) {
      *(undefined4 *)((long)__dest + 0xc) = 2;
    }
  }
LAB_004175c0:
  param_1[7] = 0;
  param_1[8] = 0;
  hb_ot_layout_table_find_feature_variations
            (param_3,0x47535542,param_7,(ulong)param_8,
             (GDEFVersion1_2<OT::Layout::SmallTypes> *)((long)param_1 + 0x2c));
  hb_ot_layout_table_find_feature_variations
            (param_3,0x47504f53,param_7,(ulong)param_8,
             (GDEFVersion1_2<OT::Layout::SmallTypes> *)(param_1 + 6));
  while (__ptr = static_shapers, static_shapers = __ptr, __ptr == (undefined8 *)0x0) {
    __ptr = hb_shapers_lazy_loader_t::create();
    puVar4 = static_shapers;
    if (__ptr == (undefined8 *)0x0) {
      __ptr = (undefined8 *)&_hb_all_shapers;
      LOCK();
      if (static_shapers == (undefined8 *)0x0) {
        static_shapers = (undefined8 *)&_hb_all_shapers;
      }
      UNLOCK();
    }
    else {
      LOCK();
      if (static_shapers == (undefined8 *)0x0) {
        static_shapers = __ptr;
      }
      UNLOCK();
    }
    if (puVar4 == (undefined8 *)0x0) break;
    if ((__ptr != (undefined8 *)0x0) && (__ptr != (undefined8 *)&_hb_all_shapers)) {
      free(__ptr);
    }
  }
  if ((code *)__ptr[2] == _hb_ot_shape) {
    do {
      if (*(long *)(param_3 + 0x58) != 0) break;
      if (*(long *)(param_3 + 0x50) == 0) goto LAB_0041762c;
      LOCK();
      bVar9 = *(long *)(param_3 + 0x58) == 0;
      if (bVar9) {
        *(long *)(param_3 + 0x58) = 1;
      }
      UNLOCK();
    } while (!bVar9);
LAB_004176ff:
    param_1[7] = _hb_ot_shape;
    pcVar6 = "ot";
  }
  else {
    if ((code *)__ptr[2] == _hb_fallback_shape) {
      do {
        if (*(long *)(param_3 + 0x60) != 0) break;
        if (*(long *)(param_3 + 0x50) == 0) goto LAB_0041762c;
        LOCK();
        bVar9 = *(long *)(param_3 + 0x60) == 0;
        if (bVar9) {
          *(long *)(param_3 + 0x60) = 1;
        }
        UNLOCK();
      } while (!bVar9);
    }
    else {
LAB_0041762c:
      if ((code *)__ptr[5] == _hb_ot_shape) {
        do {
          if (*(long *)(param_3 + 0x58) != 0) break;
          if (*(long *)(param_3 + 0x50) == 0) goto LAB_004176cd;
          LOCK();
          bVar9 = *(long *)(param_3 + 0x58) == 0;
          if (bVar9) {
            *(long *)(param_3 + 0x58) = 1;
          }
          UNLOCK();
        } while (!bVar9);
        goto LAB_004176ff;
      }
      if ((code *)__ptr[5] != _hb_fallback_shape) {
LAB_004176cd:
        free(__dest);
        return 0;
      }
      do {
        if (*(long *)(param_3 + 0x60) != 0) break;
        if (*(long *)(param_3 + 0x50) == 0) goto LAB_004176cd;
        LOCK();
        bVar9 = *(long *)(param_3 + 0x60) == 0;
        if (bVar9) {
          *(long *)(param_3 + 0x60) = 1;
        }
        UNLOCK();
      } while (!bVar9);
    }
    param_1[7] = _hb_fallback_shape;
    pcVar6 = "fallback";
  }
  param_1[8] = pcVar6;
  return CONCAT71((int7)((ulong)pcVar6 >> 8),1);
}


