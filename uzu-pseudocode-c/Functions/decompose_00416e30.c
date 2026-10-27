// Function : decompose
// Namespace: 
// Entry    : 00416e30
// Prototype: int decompose(long param_1, char param_2, undefined4 param_3)
// Body     : 00416e30 - 0041737d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* decompose(hb_ot_shape_normalize_context_t const*, bool, unsigned int) */

int __cdecl decompose(long param_1,char param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  hb_buffer_t *this;
  long lVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  void *pvVar16;
  void *pvVar17;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_2c = 0;
  local_34 = 0;
  local_30 = 0;
  local_38 = 0;
  this = *(hb_buffer_t **)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  cVar9 = (**(code **)(param_1 + 0x20))(param_1,param_3,&local_2c,&local_34);
  if (cVar9 == '\0') {
    return 0;
  }
  if (local_34 != 0) {
    local_38 = 0;
    lVar5 = *(long *)(*(long *)(lVar4 + 0x90) + 0x10);
    if (lVar5 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(lVar5 + 0x10);
    }
    iVar10 = (**(code **)(*(long *)(lVar4 + 0x90) + 0x30))
                       (lVar4,*(undefined8 *)(lVar4 + 0x98),local_34,&local_38,uVar13);
    if (iVar10 == 0) {
      return 0;
    }
  }
  local_30 = 0;
  lVar5 = *(long *)(*(long *)(lVar4 + 0x90) + 0x10);
  if (lVar5 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(lVar5 + 0x10);
  }
  iVar10 = (**(code **)(*(long *)(lVar4 + 0x90) + 0x30))
                     (lVar4,*(undefined8 *)(lVar4 + 0x98),local_2c,&local_30,uVar13);
  uVar8 = local_2c;
  if ((iVar10 == 0) || (param_2 == '\0')) {
    iVar11 = decompose(param_1,param_2,local_2c);
    uVar8 = local_2c;
    iVar7 = local_34;
    if (iVar11 != 0) {
      if (local_34 == 0) {
        return iVar11;
      }
      *(undefined4 *)(*(long *)(this + 0x70) + 0xc + (ulong)*(uint *)(this + 0x5c) * 0x14) =
           local_38;
      uVar15 = *(int *)(this + 100) + 1;
      if (((uVar15 != 0) && (*(uint *)(this + 0x68) <= uVar15)) &&
         (uVar13 = hb_buffer_t::enlarge(this,uVar15), (char)uVar13 == '\0')) {
        iVar10 = *(int *)(this + 100);
        goto LAB_00417248;
      }
      pvVar16 = *(void **)(this + 0x70);
      pvVar6 = *(void **)(this + 0x78);
      pvVar17 = pvVar6;
      if (pvVar6 == pvVar16) {
        uVar15 = *(uint *)(this + 100);
        if (*(uint *)(this + 0x5c) < uVar15 + 1) {
          pvVar17 = *(void **)(this + 0x80);
          *(void **)(this + 0x78) = pvVar17;
          if ((ulong)uVar15 != 0) {
            memcpy(pvVar17,pvVar16,(ulong)uVar15 * 0x14);
            pvVar17 = *(void **)(this + 0x78);
            pvVar16 = *(void **)(this + 0x70);
            goto LAB_00417204;
          }
        }
        pvVar16 = pvVar6;
      }
      else {
      }
LAB_00417204:
      uVar15 = *(uint *)(this + 0x5c);
      uVar3 = *(uint *)(this + 100);
      uVar12 = (ulong)uVar3;
      uVar14 = uVar3 - 1;
      if (uVar3 == 0) {
        uVar14 = 0;
      }
      if (uVar15 < *(uint *)(this + 0x60)) {
        uVar14 = uVar15;
      }
      if (uVar15 >= *(uint *)(this + 0x60)) {
        pvVar16 = pvVar17;
      }
      puVar1 = (undefined8 *)((long)pvVar16 + (ulong)uVar14 * 0x14);
      uVar13 = puVar1[1];
      puVar2 = (undefined8 *)((long)pvVar17 + uVar12 * 0x14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar13;
      *(undefined4 *)((long)pvVar17 + uVar12 * 0x14 + 0x10) =
           *(undefined4 *)((long)pvVar16 + (ulong)uVar14 * 0x14 + 0x10);
      *(int *)((long)pvVar17 + uVar12 * 0x14) = iVar7;
      iVar10 = *(int *)(this + 100) + 1;
      *(int *)(this + 100) = iVar10;
LAB_00417248:
      uVar12 = (ulong)(iVar10 - 1);
      if (iVar10 == 0) {
        uVar12 = 0;
      }
      _hb_glyph_info_set_unicode_props((uint *)(uVar12 * 0x14 + *(long *)(this + 0x78)),(long)this);
      return iVar11 + 1;
    }
    if (iVar10 == 0) {
      return 0;
    }
    *(undefined4 *)(*(long *)(this + 0x70) + 0xc + (ulong)*(uint *)(this + 0x5c) * 0x14) = local_30;
    uVar15 = *(int *)(this + 100) + 1;
    if (((uVar15 == 0) || (uVar15 < *(uint *)(this + 0x68))) ||
       (uVar13 = hb_buffer_t::enlarge(this,uVar15), (char)uVar13 != '\0')) {
      pvVar16 = *(void **)(this + 0x70);
      pvVar6 = *(void **)(this + 0x78);
      pvVar17 = pvVar6;
      if (pvVar6 == pvVar16) {
        uVar15 = *(uint *)(this + 100);
        if (*(uint *)(this + 0x5c) < uVar15 + 1) {
          pvVar17 = *(void **)(this + 0x80);
          *(void **)(this + 0x78) = pvVar17;
          if ((ulong)uVar15 != 0) {
            memcpy(pvVar17,pvVar16,(ulong)uVar15 * 0x14);
            pvVar17 = *(void **)(this + 0x78);
            pvVar16 = *(void **)(this + 0x70);
            goto LAB_0041727e;
          }
        }
        pvVar16 = pvVar6;
      }
      else {
      }
LAB_0041727e:
      uVar15 = *(uint *)(this + 0x5c);
      uVar3 = *(uint *)(this + 100);
      uVar12 = (ulong)uVar3;
      uVar14 = uVar3 - 1;
      if (uVar3 == 0) {
        uVar14 = 0;
      }
      if (uVar15 < *(uint *)(this + 0x60)) {
        uVar14 = uVar15;
      }
      if (uVar15 >= *(uint *)(this + 0x60)) {
        pvVar16 = pvVar17;
      }
      puVar1 = (undefined8 *)((long)pvVar16 + (ulong)uVar14 * 0x14);
      uVar13 = puVar1[1];
      puVar2 = (undefined8 *)((long)pvVar17 + uVar12 * 0x14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar13;
      *(undefined4 *)((long)pvVar17 + uVar12 * 0x14 + 0x10) =
           *(undefined4 *)((long)pvVar16 + (ulong)uVar14 * 0x14 + 0x10);
      *(undefined4 *)((long)pvVar17 + uVar12 * 0x14) = uVar8;
      iVar10 = *(int *)(this + 100) + 1;
      *(int *)(this + 100) = iVar10;
    }
    else {
      iVar10 = *(int *)(this + 100);
    }
    uVar12 = (ulong)(iVar10 - 1);
    if (iVar10 == 0) {
      uVar12 = 0;
    }
    _hb_glyph_info_set_unicode_props((uint *)(uVar12 * 0x14 + *(long *)(this + 0x78)),(long)this);
    if (local_34 == 0) {
      return 1;
    }
    *(undefined4 *)(*(long *)(this + 0x70) + 0xc + (ulong)*(uint *)(this + 0x5c) * 0x14) = local_38;
    uVar15 = *(int *)(this + 100) + 1;
    iVar10 = local_34;
    if ((uVar15 != 0) && (*(uint *)(this + 0x68) <= uVar15)) goto LAB_0041730f;
  }
  else {
    *(undefined4 *)(*(long *)(this + 0x70) + 0xc + (ulong)*(uint *)(this + 0x5c) * 0x14) = local_30;
    uVar15 = *(int *)(this + 100) + 1;
    if ((uVar15 == 0) ||
       ((uVar15 < *(uint *)(this + 0x68) ||
        (uVar13 = hb_buffer_t::enlarge(this,uVar15), (char)uVar13 != '\0')))) {
      pvVar16 = *(void **)(this + 0x70);
      pvVar6 = *(void **)(this + 0x78);
      pvVar17 = pvVar6;
      if (pvVar6 == pvVar16) {
        uVar15 = *(uint *)(this + 100);
        if (*(uint *)(this + 0x5c) < uVar15 + 1) {
          pvVar17 = *(void **)(this + 0x80);
          *(void **)(this + 0x78) = pvVar17;
          if ((ulong)uVar15 != 0) {
            memcpy(pvVar17,pvVar16,(ulong)uVar15 * 0x14);
            pvVar17 = *(void **)(this + 0x78);
            pvVar16 = *(void **)(this + 0x70);
            goto LAB_0041703a;
          }
        }
        pvVar16 = pvVar6;
      }
      else {
      }
LAB_0041703a:
      uVar15 = *(uint *)(this + 0x5c);
      uVar3 = *(uint *)(this + 100);
      uVar12 = (ulong)uVar3;
      uVar14 = uVar3 - 1;
      if (uVar3 == 0) {
        uVar14 = 0;
      }
      if (uVar15 < *(uint *)(this + 0x60)) {
        uVar14 = uVar15;
      }
      if (uVar15 >= *(uint *)(this + 0x60)) {
        pvVar16 = pvVar17;
      }
      puVar1 = (undefined8 *)((long)pvVar16 + (ulong)uVar14 * 0x14);
      uVar13 = puVar1[1];
      puVar2 = (undefined8 *)((long)pvVar17 + uVar12 * 0x14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar13;
      *(undefined4 *)((long)pvVar17 + uVar12 * 0x14 + 0x10) =
           *(undefined4 *)((long)pvVar16 + (ulong)uVar14 * 0x14 + 0x10);
      *(undefined4 *)((long)pvVar17 + uVar12 * 0x14) = uVar8;
      iVar10 = *(int *)(this + 100) + 1;
      *(int *)(this + 100) = iVar10;
    }
    else {
      iVar10 = *(int *)(this + 100);
    }
    uVar12 = (ulong)(iVar10 - 1);
    if (iVar10 == 0) {
      uVar12 = 0;
    }
    _hb_glyph_info_set_unicode_props((uint *)(uVar12 * 0x14 + *(long *)(this + 0x78)),(long)this);
    if (local_34 == 0) {
      return 1;
    }
    *(undefined4 *)(*(long *)(this + 0x70) + 0xc + (ulong)*(uint *)(this + 0x5c) * 0x14) = local_38;
    uVar15 = *(int *)(this + 100) + 1;
    iVar10 = local_34;
    if ((uVar15 != 0) && (*(uint *)(this + 0x68) <= uVar15)) {
LAB_0041730f:
      iVar10 = local_34;
      uVar13 = hb_buffer_t::enlarge(this,uVar15);
      if ((char)uVar13 == '\0') {
        iVar10 = *(int *)(this + 100);
        goto LAB_0041715c;
      }
    }
  }
  pvVar16 = *(void **)(this + 0x70);
  pvVar6 = *(void **)(this + 0x78);
  pvVar17 = pvVar6;
  if (pvVar6 == pvVar16) {
    uVar15 = *(uint *)(this + 100);
    if (*(uint *)(this + 0x5c) < uVar15 + 1) {
      pvVar17 = *(void **)(this + 0x80);
      *(void **)(this + 0x78) = pvVar17;
      if ((ulong)uVar15 != 0) {
        memcpy(pvVar17,pvVar16,(ulong)uVar15 * 0x14);
        pvVar17 = *(void **)(this + 0x78);
        pvVar16 = *(void **)(this + 0x70);
        goto LAB_00417118;
      }
    }
    pvVar16 = pvVar6;
  }
  else {
  }
LAB_00417118:
  uVar15 = *(uint *)(this + 0x5c);
  uVar3 = *(uint *)(this + 100);
  uVar12 = (ulong)uVar3;
  uVar14 = uVar3 - 1;
  if (uVar3 == 0) {
    uVar14 = 0;
  }
  if (uVar15 < *(uint *)(this + 0x60)) {
    uVar14 = uVar15;
  }
  if (uVar15 >= *(uint *)(this + 0x60)) {
    pvVar16 = pvVar17;
  }
  puVar1 = (undefined8 *)((long)pvVar16 + (ulong)uVar14 * 0x14);
  uVar13 = puVar1[1];
  puVar2 = (undefined8 *)((long)pvVar17 + uVar12 * 0x14);
  *puVar2 = *puVar1;
  puVar2[1] = uVar13;
  *(undefined4 *)((long)pvVar17 + uVar12 * 0x14 + 0x10) =
       *(undefined4 *)((long)pvVar16 + (ulong)uVar14 * 0x14 + 0x10);
  *(int *)((long)pvVar17 + uVar12 * 0x14) = iVar10;
  iVar10 = *(int *)(this + 100) + 1;
  *(int *)(this + 100) = iVar10;
LAB_0041715c:
  uVar12 = (ulong)(iVar10 - 1);
  if (iVar10 == 0) {
    uVar12 = 0;
  }
  _hb_glyph_info_set_unicode_props((uint *)(uVar12 * 0x14 + *(long *)(this + 0x78)),(long)this);
  return 2;
}


