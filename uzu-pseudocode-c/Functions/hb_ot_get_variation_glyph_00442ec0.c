// Function : hb_ot_get_variation_glyph
// Namespace: 
// Entry    : 00442ec0
// Prototype: char hb_ot_get_variation_glyph(undefined8 param_1, long * param_2, ulong param_3, uint param_4, uint * param_5)
// Body     : 00442ec0 - 00443192


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ot_get_variation_glyph(hb_font_t*, void*, unsigned int, unsigned int, unsigned int*, void*) */

char __cdecl
hb_ot_get_variation_glyph(undefined8 param_1,long *param_2,ulong param_3,uint param_4,uint *param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  char cVar5;
  accelerator_t *this;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  bool bVar15;
  
  plVar1 = (long *)*param_2;
  lVar2 = param_2[1];
  this = (accelerator_t *)plVar1[3];
  while (this == (accelerator_t *)0x0) {
    lVar3 = *plVar1;
    if (lVar3 == 0) {
LAB_00443180:
      this = (accelerator_t *)&_hb_NullPool;
      break;
    }
    this = calloc(1,0x58);
    if (this == (accelerator_t *)0x0) {
      LOCK();
      bVar15 = plVar1[3] == 0;
      if (bVar15) {
        plVar1[3] = (long)&_hb_NullPool;
      }
      UNLOCK();
      if (bVar15) goto LAB_00443180;
    }
    else {
      OT::cmap::accelerator_t::accelerator_t(this,lVar3);
      LOCK();
      bVar15 = plVar1[3] == 0;
      if (bVar15) {
        plVar1[3] = (long)this;
      }
      UNLOCK();
      if (bVar15) break;
      OT::cmap::accelerator_t::~accelerator_t(this);
      free(this);
    }
    this = (accelerator_t *)plVar1[3];
  }
  puVar14 = *(undefined4 **)(this + 8);
  puVar6 = &_hb_NullPool;
  if (puVar14 == (undefined4 *)0x0) {
    puVar14 = &_hb_NullPool;
  }
  uVar7 = *(uint *)((long)puVar14 + 6);
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  if (0 < (int)uVar7) {
    iVar8 = uVar7 - 1;
    iVar12 = 0;
    do {
      while( true ) {
        uVar11 = (uint)(iVar8 + iVar12) >> 1;
        lVar3 = (ulong)uVar11 * 0xb;
        uVar7 = (uint)*(byte *)((long)puVar14 + lVar3 + 0xc) |
                (uint)*(byte *)((long)puVar14 + lVar3 + 0xb) << 8 |
                (uint)*(byte *)((long)puVar14 + lVar3 + 10) << 0x10;
        if (param_4 < uVar7) break;
        if (uVar7 == param_4) {
          puVar13 = (undefined4 *)((long)puVar14 + lVar3 + 10);
          uVar7 = *(uint *)((long)puVar14 + lVar3 + 0xd);
          goto joined_r0x00443051;
        }
        iVar12 = uVar11 + 1;
        if (iVar8 < iVar12) goto LAB_00442f59;
      }
      iVar8 = uVar11 - 1;
    } while (iVar12 <= iVar8);
  }
LAB_00442f59:
  puVar13 = &_hb_NullPool;
  uVar7 = ram0x005f4743;
joined_r0x00443051:
  if (uVar7 != 0) {
    puVar6 = (uint *)((ulong)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                             uVar7 << 0x18) + (long)puVar14);
  }
  uVar7 = *puVar6;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  uVar11 = (uint)param_3;
  if (0 < (int)uVar7) {
    iVar12 = uVar7 - 1;
    iVar8 = 0;
    do {
      while( true ) {
        uVar9 = (uint)(iVar12 + iVar8) >> 1;
        uVar10 = (ulong)uVar9;
        uVar7 = (uint)*(byte *)((long)puVar6 + uVar10 * 4 + 6) |
                (uint)*(byte *)((long)puVar6 + uVar10 * 4 + 5) << 8 |
                (uint)(byte)puVar6[uVar10 + 1] << 0x10;
        if (uVar11 < uVar7) break;
        if (uVar11 <= uVar7 + *(byte *)((long)puVar6 + uVar10 * 4 + 7)) {
          if (*(code **)(this + 0x10) == (code *)0x0) goto LAB_00443098;
          if ((lVar2 == 0) ||
             (uVar7 = *(uint *)(lVar2 + (param_3 & 0xff) * 4),
             uVar7 >> 0x10 != ((uint)(param_3 >> 8) & 0xffffff))) {
            cVar5 = (**(code **)(this + 0x10))
                              (*(undefined8 *)(this + 0x18),param_3 & 0xffffffff,param_5);
            if (lVar2 == 0) {
              return cVar5;
            }
            if (cVar5 == '\0') {
              return '\0';
            }
            if (0x1fffff < uVar11) {
              return cVar5;
            }
            if (*param_5 < 0x10000) {
              *(uint *)(lVar2 + (param_3 & 0xff) * 4) = *param_5 | (uVar11 & 0xffff00) << 8;
              return cVar5;
            }
            return cVar5;
          }
          uVar7 = uVar7 & 0xffff;
          goto LAB_0044303c;
        }
        iVar8 = uVar9 + 1;
        if (iVar12 < iVar8) goto LAB_00442fc5;
      }
      iVar12 = uVar9 - 1;
    } while (iVar8 <= iVar12);
  }
LAB_00442fc5:
  uVar7 = *(uint *)((long)puVar13 + 7);
  puVar6 = &_hb_NullPool;
  if (uVar7 != 0) {
    puVar6 = (uint *)((long)puVar14 +
                     (ulong)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                            uVar7 << 0x18));
  }
  uVar7 = *puVar6;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  if (0 < (int)uVar7) {
    iVar12 = uVar7 - 1;
    iVar8 = 0;
    do {
      while( true ) {
        uVar9 = (uint)(iVar12 + iVar8) >> 1;
        lVar2 = (ulong)uVar9 * 5;
        uVar7 = (uint)*(byte *)((long)puVar6 + lVar2 + 6) |
                (uint)*(byte *)((long)puVar6 + lVar2 + 5) << 8 |
                (uint)*(byte *)((long)puVar6 + lVar2 + 4) << 0x10;
        if (uVar11 < uVar7) break;
        if (uVar7 == uVar11) {
          uVar4 = *(ushort *)((long)puVar6 + lVar2 + 7);
          goto joined_r0x00443096;
        }
        iVar8 = uVar9 + 1;
        if (iVar12 < iVar8) goto LAB_0044302b;
      }
      iVar12 = uVar9 - 1;
    } while (iVar8 <= iVar12);
  }
LAB_0044302b:
  uVar4 = ram0x005f4743;
joined_r0x00443096:
  if (uVar4 == 0) {
LAB_00443098:
    cVar5 = '\0';
  }
  else {
    uVar7 = (uint)(ushort)(uVar4 << 8 | uVar4 >> 8);
LAB_0044303c:
    *param_5 = uVar7;
    cVar5 = '\x01';
  }
  return cVar5;
}


