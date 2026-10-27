// Function : _hb_fallback_shape
// Namespace: 
// Entry    : 003fe8a0
// Prototype: undefined8 _hb_fallback_shape(undefined8 param_1, hb_font_t * param_2, long param_3)
// Body     : 003fe8a0 - 003fec10


undefined8 _hb_fallback_shape(undefined8 param_1,hb_font_t *param_2,long param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined7 extraout_var;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  byte *pbVar16;
  long lVar17;
  long lVar18;
  undefined4 local_70;
  int local_6c;
  int local_68 [8];
  uint local_48;
  int local_44;
  long local_40;
  long local_38;
  
  local_70 = 0;
  lVar18 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
  if (lVar18 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar18 + 0x10);
  }
  local_44 = (**(code **)(*(long *)(param_2 + 0x90) + 0x30))
                       (param_2,*(undefined8 *)(param_2 + 0x98),0x20,&local_70,uVar10);
  *(undefined2 *)(param_3 + 0x5a) = 0x100;
  *(undefined4 *)(param_3 + 100) = 0;
  lVar18 = *(long *)(param_3 + 0x70);
  *(long *)(param_3 + 0x78) = lVar18;
  uVar7 = *(uint *)(param_3 + 0x60);
  if (uVar7 * 0x14 != 0) {
    memset(*(void **)(param_3 + 0x80),0,(ulong)(uVar7 * 0x14));
    uVar7 = *(uint *)(param_3 + 0x60);
    lVar18 = *(long *)(param_3 + 0x70);
  }
  uVar9 = *(uint *)(param_3 + 0x38);
  local_40 = param_3;
  if (uVar7 != 0) {
    lVar13 = *(long *)(param_3 + 0x80);
    local_48 = uVar9 & 0xfffffffe;
    local_38 = (ulong)uVar7 * 0x14;
    lVar17 = 0;
    do {
      while ((uVar7 = *(uint *)(lVar18 + lVar17), local_44 != 0 &&
             (bVar6 = hb_unicode_funcs_t::is_default_ignorable(uVar7),
             (int)CONCAT71(extraout_var,bVar6) != 0))) {
        *(undefined4 *)(lVar18 + lVar17) = local_70;
        *(undefined8 *)(lVar13 + lVar17) = 0;
        lVar17 = lVar17 + 0x14;
        if (local_38 == lVar17) goto LAB_003fea95;
      }
      puVar1 = (undefined4 *)(lVar18 + lVar17);
      *(undefined4 *)(lVar18 + lVar17) = 0;
      lVar3 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
      if (lVar3 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(lVar3 + 0x10);
      }
      (**(code **)(*(long *)(param_2 + 0x90) + 0x30))
                (param_2,*(undefined8 *)(param_2 + 0x98),uVar7,puVar1,uVar10);
      uVar8 = *puVar1;
      *(undefined8 *)(lVar13 + lVar17) = 0;
      lVar3 = *(long *)(param_2 + 0x90);
      if (local_48 == 4) {
        if (*(long *)(lVar3 + 0x10) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x28);
        }
        uVar8 = (**(code **)(lVar3 + 0x48))(param_2,*(undefined8 *)(param_2 + 0x98),uVar8,uVar10);
        *(undefined4 *)(lVar13 + lVar17) = uVar8;
        hb_font_t::get_glyph_h_origin_with_fallback(param_2,*puVar1,local_68,&local_6c);
      }
      else {
        if (*(long *)(lVar3 + 0x10) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x30);
        }
        uVar8 = (**(code **)(lVar3 + 0x50))(param_2,*(undefined8 *)(param_2 + 0x98),uVar8,uVar10);
        *(undefined4 *)(lVar13 + 4 + lVar17) = uVar8;
        hb_font_t::get_glyph_v_origin_with_fallback(param_2,*puVar1,local_68,&local_6c);
      }
      piVar2 = (int *)(lVar13 + 8 + lVar17);
      *piVar2 = *piVar2 - local_68[0];
      piVar2 = (int *)(lVar13 + 0xc + lVar17);
      *piVar2 = *piVar2 - local_6c;
      lVar17 = lVar17 + 0x14;
    } while (local_38 != lVar17);
  }
LAB_003fea95:
  if ((uVar9 & 0xfffffffd) == 5) {
    uVar7 = *(uint *)(local_40 + 0x60);
    if (1 < uVar7) {
      puVar11 = *(undefined8 **)(local_40 + 0x70);
      uVar12 = (ulong)(uVar7 - 1);
      puVar14 = (undefined8 *)((long)puVar11 + uVar12 * 0x14);
      uVar15 = 0;
      do {
        uVar12 = uVar12 - 1;
        uVar8 = *(undefined4 *)(puVar14 + 2);
        uVar10 = *puVar14;
        uVar4 = puVar14[1];
        *(undefined4 *)(puVar14 + 2) = *(undefined4 *)(puVar11 + 2);
        uVar5 = puVar11[1];
        *puVar14 = *puVar11;
        puVar14[1] = uVar5;
        *(undefined4 *)(puVar11 + 2) = uVar8;
        *puVar11 = uVar10;
        puVar11[1] = uVar4;
        uVar15 = uVar15 + 1;
        puVar11 = (undefined8 *)((long)puVar11 + 0x14);
        puVar14 = (undefined8 *)((long)puVar14 + -0x14);
      } while (uVar15 < (uVar12 & 0xffffffff));
    }
    if (*(char *)(local_40 + 0x5b) != '\0') {
      uVar9 = *(uint *)(local_40 + 0x60);
      if (uVar9 < uVar7) {
        uVar7 = uVar9;
      }
      if (uVar7 < 2) goto LAB_003feb84;
      puVar11 = *(undefined8 **)(local_40 + 0x80);
      uVar12 = (ulong)(uVar7 - 1);
      puVar14 = (undefined8 *)((long)puVar11 + uVar12 * 0x14);
      uVar15 = 0;
      do {
        uVar12 = uVar12 - 1;
        uVar8 = *(undefined4 *)(puVar14 + 2);
        uVar10 = *puVar14;
        uVar4 = puVar14[1];
        *(undefined4 *)(puVar14 + 2) = *(undefined4 *)(puVar11 + 2);
        uVar5 = puVar11[1];
        *puVar14 = *puVar11;
        puVar14[1] = uVar5;
        *(undefined4 *)(puVar11 + 2) = uVar8;
        *puVar11 = uVar10;
        puVar11[1] = uVar4;
        uVar15 = uVar15 + 1;
        puVar11 = (undefined8 *)((long)puVar11 + 0x14);
        puVar14 = (undefined8 *)((long)puVar14 + -0x14);
      } while (uVar15 < (uVar12 & 0xffffffff));
    }
  }
  uVar9 = *(uint *)(local_40 + 0x60);
LAB_003feb84:
  if (uVar9 != 0) {
    lVar18 = *(long *)(local_40 + 0x70);
    if ((ulong)uVar9 - 1 < 3) {
      uVar12 = 0;
    }
    else {
      pbVar16 = (byte *)(lVar18 + 0x40);
      uVar12 = 0;
      do {
        pbVar16[-0x3c] = pbVar16[-0x3c] & 0xf8;
        pbVar16[-0x28] = pbVar16[-0x28] & 0xf8;
        pbVar16[-0x14] = pbVar16[-0x14] & 0xf8;
        *pbVar16 = *pbVar16 & 0xf8;
        uVar12 = uVar12 + 4;
        pbVar16 = pbVar16 + 0x50;
      } while ((uVar9 & 0xfffffffc) != uVar12);
    }
    if ((ulong)(uVar9 & 3) != 0) {
      lVar13 = 0;
      do {
        pbVar16 = (byte *)(lVar18 + uVar12 * 0x14 + 4 + lVar13);
        *pbVar16 = *pbVar16 & 0xf8;
        lVar13 = lVar13 + 0x14;
      } while ((ulong)(uVar9 & 3) * 0x14 != lVar13);
    }
  }
  return 1;
}


