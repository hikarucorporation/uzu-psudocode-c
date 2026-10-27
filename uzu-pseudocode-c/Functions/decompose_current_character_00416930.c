// Function : decompose_current_character
// Namespace: 
// Entry    : 00416930
// Prototype: undefined decompose_current_character(long param_1, int param_2)
// Body     : 00416930 - 00416d56


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* decompose_current_character(hb_ot_shape_normalize_context_t const*, bool) */

void __cdecl decompose_current_character(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  uint uVar4;
  hb_buffer_t *this;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ushort uVar13;
  void *pvVar14;
  void *pvVar15;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  
  this = *(hb_buffer_t **)(param_1 + 8);
  iVar8 = *(int *)(*(long *)(this + 0x70) + (ulong)*(uint *)(this + 0x5c) * 0x14);
  if (param_2 == 0) {
    iVar6 = decompose(param_1,'\0',iVar8);
    if (iVar6 != 0) goto LAB_00416cc6;
    lVar10 = *(long *)(param_1 + 0x10);
    local_2c = *(undefined4 *)(this + 0x28);
    lVar5 = *(long *)(*(long *)(lVar10 + 0x90) + 0x10);
    if (lVar5 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(lVar5 + 0x10);
    }
    iVar6 = (**(code **)(*(long *)(lVar10 + 0x90) + 0x30))
                      (lVar10,*(undefined8 *)(lVar10 + 0x98),iVar8,&local_2c,uVar11);
    if (iVar6 == 0) goto LAB_00416a08;
    goto LAB_00416c16;
  }
  lVar10 = *(long *)(param_1 + 0x10);
  local_2c = *(undefined4 *)(this + 0x28);
  lVar5 = *(long *)(*(long *)(lVar10 + 0x90) + 0x10);
  if (lVar5 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar5 + 0x10);
  }
  iVar6 = (**(code **)(*(long *)(lVar10 + 0x90) + 0x30))
                    (lVar10,*(undefined8 *)(lVar10 + 0x98),iVar8,&local_2c,uVar11);
  if (iVar6 != 0) goto LAB_00416c16;
  iVar6 = decompose(param_1,'\x01',iVar8);
  if (iVar6 != 0) goto LAB_00416cc6;
LAB_00416a08:
  if ((*(ushort *)(*(long *)(this + 0x70) + 0x10 + (ulong)*(uint *)(this + 0x5c) * 0x14) & 0x1f) !=
      0x1d) goto switchD_00416a49_caseD_200b;
  if (iVar8 < 0x2000) {
    uVar13 = 0x1200;
    if ((iVar8 == 0x20) || (iVar8 == 0xa0)) goto LAB_00416ab0;
    goto switchD_00416a49_caseD_200b;
  }
  switch(iVar8) {
  case 0x2000:
  case 0x2002:
    uVar13 = 0x200;
    break;
  case 0x2001:
  case 0x2003:
switchD_00416a49_caseD_2001:
    uVar13 = 0x100;
    break;
  case 0x2004:
    uVar13 = 0x300;
    break;
  case 0x2005:
    uVar13 = 0x400;
    break;
  case 0x2006:
    uVar13 = 0x600;
    break;
  case 0x2007:
    uVar13 = 0x1300;
    break;
  case 0x2008:
    uVar13 = 0x1400;
    break;
  case 0x2009:
    uVar13 = 0x500;
    break;
  case 0x200a:
    uVar13 = 0x1000;
    break;
  case 0x200b:
  case 0x200c:
  case 0x200d:
  case 0x200e:
  case 0x200f:
  case 0x2010:
  case 0x2011:
  case 0x2012:
  case 0x2013:
  case 0x2014:
  case 0x2015:
  case 0x2016:
  case 0x2017:
  case 0x2018:
  case 0x2019:
  case 0x201a:
  case 0x201b:
  case 0x201c:
  case 0x201d:
  case 0x201e:
  case 0x201f:
  case 0x2020:
  case 0x2021:
  case 0x2022:
  case 0x2023:
  case 0x2024:
  case 0x2025:
  case 0x2026:
  case 0x2027:
  case 0x2028:
  case 0x2029:
  case 0x202a:
  case 0x202b:
  case 0x202c:
  case 0x202d:
  case 0x202e:
  case 0x2030:
  case 0x2031:
  case 0x2032:
  case 0x2033:
  case 0x2034:
  case 0x2035:
  case 0x2036:
  case 0x2037:
  case 0x2038:
  case 0x2039:
  case 0x203a:
  case 0x203b:
  case 0x203c:
  case 0x203d:
  case 0x203e:
  case 0x203f:
  case 0x2040:
  case 0x2041:
  case 0x2042:
  case 0x2043:
  case 0x2044:
  case 0x2045:
  case 0x2046:
  case 0x2047:
  case 0x2048:
  case 0x2049:
  case 0x204a:
  case 0x204b:
  case 0x204c:
  case 0x204d:
  case 0x204e:
  case 0x204f:
  case 0x2050:
  case 0x2051:
  case 0x2052:
  case 0x2053:
  case 0x2054:
  case 0x2055:
  case 0x2056:
  case 0x2057:
  case 0x2058:
  case 0x2059:
  case 0x205a:
  case 0x205b:
  case 0x205c:
  case 0x205d:
  case 0x205e:
    goto switchD_00416a49_caseD_200b;
  case 0x202f:
    uVar13 = 0x1500;
    break;
  case 0x205f:
    uVar13 = 0x1100;
    break;
  default:
    if (iVar8 == 0x3000) goto switchD_00416a49_caseD_2001;
    goto switchD_00416a49_caseD_200b;
  }
LAB_00416ab0:
  lVar10 = *(long *)(param_1 + 0x10);
  local_28 = 0;
  lVar5 = *(long *)(*(long *)(lVar10 + 0x90) + 0x10);
  if (lVar5 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar5 + 0x10);
  }
  iVar6 = (**(code **)(*(long *)(lVar10 + 0x90) + 0x30))
                    (lVar10,*(undefined8 *)(lVar10 + 0x98),0x20,&local_28,uVar11);
  if ((iVar6 != 0) || (local_28 = *(int *)(this + 0x24), local_28 != 0)) {
    lVar10 = *(long *)(this + 0x70);
    uVar12 = (ulong)*(uint *)(this + 0x5c);
    uVar3 = *(ushort *)(lVar10 + 0x10 + uVar12 * 0x14);
    if ((uVar3 & 0x1f) == 0x1d) {
      *(ushort *)(lVar10 + uVar12 * 0x14 + 0x10) = uVar3 & 0xff | uVar13;
      lVar10 = *(long *)(this + 0x70);
      uVar12 = (ulong)*(uint *)(this + 0x5c);
    }
    *(int *)(lVar10 + 0xc + uVar12 * 0x14) = local_28;
    if (this[0x5a] != (hb_buffer_t)0x0) {
      pvVar15 = *(void **)(this + 0x78);
      pvVar14 = *(void **)(this + 0x70);
      iVar8 = *(int *)(this + 100);
      if ((pvVar15 != pvVar14) || (iVar8 != *(int *)(this + 0x5c))) {
        uVar7 = iVar8 + 1;
        if ((uVar7 == 0) || (uVar7 < *(uint *)(this + 0x68))) {
          if (pvVar15 == pvVar14) {
LAB_00416b83:
            uVar7 = *(uint *)(this + 100);
            if (*(int *)(this + 0x5c) + 1U < uVar7 + 1) {
              pvVar15 = *(void **)(this + 0x80);
              *(void **)(this + 0x78) = pvVar15;
              if ((ulong)uVar7 != 0) {
                memcpy(pvVar15,pvVar14,(ulong)uVar7 * 0x14);
                pvVar14 = *(void **)(this + 0x70);
                pvVar15 = *(void **)(this + 0x78);
              }
            }
            else {
              pvVar15 = pvVar14;
            }
          }
        }
        else {
          uVar11 = hb_buffer_t::enlarge(this,uVar7);
          if ((char)uVar11 == '\0') goto LAB_00416d09;
          pvVar14 = *(void **)(this + 0x70);
          pvVar15 = *(void **)(this + 0x78);
          if (pvVar15 == pvVar14) goto LAB_00416b83;
        }
        uVar7 = *(uint *)(this + 0x5c);
        uVar4 = *(uint *)(this + 100);
        *(undefined4 *)((long)pvVar15 + (ulong)uVar4 * 0x14 + 0x10) =
             *(undefined4 *)((long)pvVar14 + (ulong)uVar7 * 0x14 + 0x10);
        puVar1 = (undefined8 *)((long)pvVar14 + (ulong)uVar7 * 0x14);
        uVar11 = puVar1[1];
        puVar2 = (undefined8 *)((long)pvVar15 + (ulong)uVar4 * 0x14);
        *puVar2 = *puVar1;
        puVar2[1] = uVar11;
        iVar8 = *(int *)(this + 100);
      }
      *(int *)(this + 100) = iVar8 + 1;
    }
    *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + 1;
LAB_00416d09:
    this[0xc0] = (hb_buffer_t)((byte)this[0xc0] | 4);
    return;
  }
switchD_00416a49_caseD_200b:
  if (iVar8 == 0x2011) {
    lVar10 = *(long *)(param_1 + 0x10);
    local_24 = 0;
    lVar5 = *(long *)(*(long *)(lVar10 + 0x90) + 0x10);
    if (lVar5 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(lVar5 + 0x10);
    }
    iVar8 = (**(code **)(*(long *)(lVar10 + 0x90) + 0x30))
                      (lVar10,*(undefined8 *)(lVar10 + 0x98),0x2010,&local_24,uVar11);
    if (iVar8 == 0) goto LAB_00416c16;
    uVar9 = local_24;
  }
  else {
LAB_00416c16:
    uVar9 = local_2c;
  }
  *(undefined4 *)(*(long *)(this + 0x70) + 0xc + (ulong)*(uint *)(this + 0x5c) * 0x14) = uVar9;
  if (this[0x5a] == (hb_buffer_t)0x0) goto LAB_00416cc6;
  pvVar15 = *(void **)(this + 0x78);
  pvVar14 = *(void **)(this + 0x70);
  iVar8 = *(int *)(this + 100);
  if ((pvVar15 != pvVar14) || (iVar8 != *(int *)(this + 0x5c))) {
    uVar7 = iVar8 + 1;
    if ((uVar7 == 0) || (uVar7 < *(uint *)(this + 0x68))) {
      if (pvVar15 == pvVar14) goto LAB_00416c5f;
    }
    else {
      uVar11 = hb_buffer_t::enlarge(this,uVar7);
      if ((char)uVar11 == '\0') {
        return;
      }
      pvVar14 = *(void **)(this + 0x70);
      pvVar15 = *(void **)(this + 0x78);
      if (pvVar15 == pvVar14) {
LAB_00416c5f:
        uVar7 = *(uint *)(this + 100);
        if (*(int *)(this + 0x5c) + 1U < uVar7 + 1) {
          pvVar15 = *(void **)(this + 0x80);
          *(void **)(this + 0x78) = pvVar15;
          if ((ulong)uVar7 != 0) {
            memcpy(pvVar15,pvVar14,(ulong)uVar7 * 0x14);
            pvVar14 = *(void **)(this + 0x70);
            pvVar15 = *(void **)(this + 0x78);
          }
        }
        else {
          pvVar15 = pvVar14;
        }
      }
    }
    uVar7 = *(uint *)(this + 0x5c);
    uVar4 = *(uint *)(this + 100);
    *(undefined4 *)((long)pvVar15 + (ulong)uVar4 * 0x14 + 0x10) =
         *(undefined4 *)((long)pvVar14 + (ulong)uVar7 * 0x14 + 0x10);
    puVar1 = (undefined8 *)((long)pvVar14 + (ulong)uVar7 * 0x14);
    uVar11 = puVar1[1];
    puVar2 = (undefined8 *)((long)pvVar15 + (ulong)uVar4 * 0x14);
    *puVar2 = *puVar1;
    puVar2[1] = uVar11;
    iVar8 = *(int *)(this + 100);
  }
  *(int *)(this + 100) = iVar8 + 1;
LAB_00416cc6:
  *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + 1;
  return;
}


