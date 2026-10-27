// Function : applyEffect
// Namespace: juce:DropShadowEffect
// Entry    : 003ce040
// Prototype: undefined applyEffect(float param_1, float param_2, DropShadowEffect * this, long * param_4, Graphics * param_5)
// Body     : 003ce040 - 003ceb23


/* WARNING: Removing unreachable block (ram,0x003ce82d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::DropShadowEffect::applyEffect(juce::Image&, juce::Graphics&, float, float) */

void __thiscall
juce::DropShadowEffect::applyEffect
          (float param_1,float param_2,DropShadowEffect *this,long *param_4,Graphics *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  Image *pIVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined1 *puVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  Image *pIVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  int iVar28;
  undefined4 uVar29;
  Image *local_1f0;
  ulong local_1e8;
  float fStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  float fStack_1d4;
  int local_1d0;
  uint local_1cc;
  int local_1c8;
  long *local_1c0;
  long local_1b0;
  long local_1a8;
  Image *local_1a0;
  long local_198;
  ulong local_190;
  undefined8 local_188;
  double dStack_180;
  long *local_178;
  long *local_170;
  undefined1 local_168;
  int local_164;
  int local_160;
  uint local_15c;
  int local_158;
  long *local_150;
  ulong local_148;
  long *local_140;
  float local_138;
  int local_134;
  uint local_130;
  float local_12c;
  ulong local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  long local_110;
  long local_108;
  Image *local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  ulong local_d8;
  long local_d0;
  ulong local_c8;
  ulong local_c0;
  Graphics *local_b8;
  long *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  ulong local_90;
  long local_88;
  long *local_80;
  ulong local_78;
  long local_70;
  ulong local_68;
  ulong local_60;
  float local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar12 = *(uint *)(this + 8);
  iVar28 = SUB84((double)((float)(uVar12 >> 0x18) * param_2) + DAT_005d9098,0);
  iVar16 = 0xff;
  if (iVar28 < 0xff) {
    iVar16 = iVar28;
  }
  pIVar21 = (Image *)*param_4;
  local_12c = param_2;
  local_58 = param_1;
  if (pIVar21 == (Image *)0x0) goto LAB_003ceaa7;
  local_138 = (float)*(int *)(this + 0x14);
  local_48 = *(undefined8 *)(this + 0xc);
  uStack_40 = 0;
  local_134 = iVar16;
  local_130 = uVar12;
  if (*(int *)(pIVar21 + 0xc) == 3) {
    LOCK();
    *(int *)(pIVar21 + 8) = *(int *)(pIVar21 + 8) + 1;
    UNLOCK();
    local_1f0 = pIVar21;
  }
  else {
    uVar12 = *(uint *)(pIVar21 + 0x10);
    uVar27 = (ulong)uVar12;
    uVar19 = *(uint *)(pIVar21 + 0x14);
    (**(code **)(*(long *)pIVar21 + 0x20))(&local_140);
                    /* try { // try from 003ce10b to 003ce12b has its CatchHandler @ 003ceb98 */
    local_148 = (ulong)uVar19;
    (**(code **)(*local_140 + 0x10))(&local_100,local_140,3,uVar27,uVar19,0);
    pIVar21 = local_100;
    uVar18 = local_148;
    local_100 = (Image *)0x0;
    local_1a0 = pIVar21;
    if (pIVar21 == (Image *)0x0) {
      lVar25 = *param_4;
      if (lVar25 == 0) {
        uVar14 = 0;
LAB_003ce86c:
        local_1e8 = 0;
        fStack_1e0 = (float)uVar14;
        uStack_1dc = (undefined4)((ulong)uVar14 >> 0x20);
                    /* try { // try from 003ce87a to 003ce888 has its CatchHandler @ 003ceb5c */
        Image::clear(pIVar21,&local_1e8,0);
      }
      else {
        iVar16 = *(int *)(lVar25 + 0xc);
LAB_003ce2e1:
        if (iVar16 != 1) {
          uVar14 = *(undefined8 *)(lVar25 + 0x10);
          goto LAB_003ce86c;
        }
      }
      if (pIVar21 == (Image *)0x0) {
        local_178 = (long *)0x0;
      }
      else {
                    /* try { // try from 003ce892 to 003ce89f has its CatchHandler @ 003ceb5a */
        (**(code **)(*(long *)pIVar21 + 0x10))(&local_178,pIVar21);
      }
      local_168 = 0;
      local_1e8 = (ulong)DAT_005d9038;
      fStack_1e0 = 0.0;
      uStack_1dc = 0;
      uStack_1d8 = 0x3f800000;
      fStack_1d4 = 0.0;
      local_170 = local_178;
                    /* try { // try from 003ce8e7 to 003ce906 has its CatchHandler @ 003ceb61 */
      if ((*param_4 != 0) && (cVar11 = (**(code **)(*local_178 + 0x68))(), cVar11 == '\0')) {
        (**(code **)(*local_170 + 0xe0))(local_170,param_4,&local_1e8);
      }
      plVar24 = local_178;
LAB_003ce90f:
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 8))();
      }
    }
    else {
      lVar25 = *param_4;
      iVar28 = (int)local_148;
      if (*(int *)(pIVar21 + 0xc) != 3) {
        iVar16 = *(int *)(lVar25 + 0xc);
        if ((iVar16 != 3) || (*(int *)(pIVar21 + 0xc) != 2)) goto LAB_003ce2e1;
        local_1c0 = (long *)0x0;
                    /* try { // try from 003ce1e3 to 003ce1f7 has its CatchHandler @ 003ceb2b */
        local_1cc = uVar12;
        local_1c8 = iVar28;
        (**(code **)(*(long *)pIVar21 + 0x38))(pIVar21,&local_1e8,0,0,1);
        local_150 = (long *)0x0;
                    /* try { // try from 003ce219 to 003ce22a has its CatchHandler @ 003ceb29 */
        local_15c = uVar12;
        local_158 = iVar28;
        (**(code **)(*(long *)*param_4 + 0x38))((long *)*param_4,&local_178,0,0,0);
        if ((0 < iVar28) && (0 < (int)uVar12)) {
          uVar26 = 0;
          do {
            uVar13 = 0;
            do {
              bVar6 = *(byte *)((long)local_178 +
                               (long)local_160 * uVar13 + (long)local_164 * uVar26);
              *(uint *)((long)local_1d0 * uVar13 + (long)(int)fStack_1d4 * uVar26 + local_1e8) =
                   (uint)bVar6 << 0x10 | (uint)bVar6 | (uint)bVar6 << 0x18 | (uint)bVar6 << 8;
              uVar13 = uVar13 + 1;
            } while (uVar27 != uVar13);
            uVar26 = uVar26 + 1;
          } while (uVar26 != uVar18);
        }
        if (local_150 != (long *)0x0) {
          (**(code **)(*local_150 + 8))();
        }
        plVar24 = local_1c0;
        goto LAB_003ce90f;
      }
      if ((lVar25 == 0) || (*(int *)(lVar25 + 0xc) != 1)) {
        local_1c0 = (long *)0x0;
                    /* try { // try from 003ce309 to 003ce31d has its CatchHandler @ 003ceb45 */
        local_1cc = uVar12;
        local_1c8 = iVar28;
        (**(code **)(*(long *)pIVar21 + 0x38))(pIVar21,&local_1e8,0,0,1);
        local_150 = (long *)0x0;
                    /* try { // try from 003ce34f to 003ce360 has its CatchHandler @ 003ceb2d */
        local_15c = uVar12;
        local_158 = iVar28;
        local_b8 = param_5;
        local_b0 = param_4;
        (**(code **)(*(long *)*param_4 + 0x38))((long *)*param_4,&local_178,0,0,0);
        if ((0 < iVar28) && (0 < (int)uVar12)) {
          local_1a8 = (long)local_1d0;
          local_1b0 = (long)local_160;
          local_128 = (ulong)(uVar12 & 0xffffffe0);
          local_c0 = local_128 - 0x20;
          local_c8 = (local_c0 >> 5) + 1;
          local_d8 = local_c8 & 0xfffffffffffffffe;
          local_90 = (ulong)(uVar12 & 0xfffffff8);
          local_68 = (ulong)(uVar12 & 3);
          local_d0 = local_1b0 * 0x20;
          local_e0 = local_1b0 * 0x40;
          local_e8 = local_1a8 * 0x20;
          local_f0 = local_1a8 * 0x40;
          local_98 = -local_90;
          local_108 = (long)(int)fStack_1d4;
          local_110 = (long)local_164;
          local_88 = uVar27 + 3;
          local_f8 = (long)local_178 + 3;
          local_80 = local_178;
          local_118 = (undefined8 *)((long)local_178 + 0x13);
          local_120 = (undefined8 *)(local_1e8 + 0x10);
          local_a0 = local_1b0 * 8;
          local_a8 = local_1a8 * 8;
          local_70 = local_1b0 * 4;
          local_78 = local_1e8;
          local_190 = local_1e8;
          uVar18 = 0;
          local_198 = local_f8;
          do {
            local_60 = uVar18;
            if ((local_160 == 1 && local_1d0 == 1) && 7 < uVar12) {
              lVar25 = local_60 * local_110;
              uVar18 = local_1e8 + local_60 * local_108;
              if ((uVar18 < (ulong)(local_88 + lVar25 + (long)local_178)) &&
                 ((ulong)((long)local_178 + lVar25 + 3) < local_60 * local_108 + uVar27 + local_1e8)
                 ) goto LAB_003ce5c7;
              if (uVar12 < 0x20) {
                uVar18 = 0;
LAB_003ce7bb:
                lVar25 = local_98 + uVar18;
                puVar23 = (undefined8 *)(local_1b0 * uVar18 + local_198);
                puVar15 = (undefined8 *)(uVar18 * local_1a8 + local_190);
                do {
                  *puVar15 = *puVar23;
                  puVar23 = puVar23 + local_1b0;
                  puVar15 = puVar15 + local_1a8;
                  lVar25 = lVar25 + 8;
                } while (lVar25 != 0);
                uVar18 = local_90;
                if (local_90 == uVar27) goto LAB_003ce510;
                goto LAB_003ce5c9;
              }
              if (local_c0 == 0) {
                lVar20 = 0;
LAB_003ce76a:
                puVar1 = (undefined4 *)(lVar25 + local_f8 + lVar20 * local_1b0);
                uVar29 = puVar1[1];
                uVar7 = puVar1[2];
                uVar8 = puVar1[3];
                puVar15 = (undefined8 *)(lVar25 + local_f8 + 0x10 + lVar20 * local_1b0);
                uVar14 = *puVar15;
                uVar9 = puVar15[1];
                puVar2 = (undefined4 *)(uVar18 + lVar20 * local_1a8);
                *puVar2 = *puVar1;
                puVar2[1] = uVar29;
                puVar2[2] = uVar7;
                puVar2[3] = uVar8;
                puVar15 = (undefined8 *)(uVar18 + 0x10 + lVar20 * local_1a8);
                *puVar15 = uVar14;
                puVar15[1] = uVar9;
              }
              else {
                lVar20 = 0;
                uVar26 = local_d8;
                puVar15 = local_118;
                puVar23 = local_120;
                do {
                  uVar14 = puVar15[-1];
                  uVar9 = *puVar15;
                  uVar10 = puVar15[1];
                  puVar23[-2] = puVar15[-2];
                  puVar23[-1] = uVar14;
                  *puVar23 = uVar9;
                  puVar23[1] = uVar10;
                  puVar4 = puVar15 + local_1b0 * 4 + -2;
                  uVar29 = *(undefined4 *)((long)puVar4 + 4);
                  uVar7 = *(undefined4 *)(puVar4 + 1);
                  uVar8 = *(undefined4 *)((long)puVar4 + 0xc);
                  uVar14 = puVar15[local_1b0 * 4];
                  uVar9 = (puVar15 + local_1b0 * 4)[1];
                  puVar5 = puVar23 + local_1a8 * 4 + -2;
                  *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
                  *(undefined4 *)((long)puVar5 + 4) = uVar29;
                  *(undefined4 *)(puVar5 + 1) = uVar7;
                  *(undefined4 *)((long)puVar5 + 0xc) = uVar8;
                  puVar23[local_1a8 * 4] = uVar14;
                  (puVar23 + local_1a8 * 4)[1] = uVar9;
                  lVar20 = lVar20 + 0x40;
                  puVar15 = puVar15 + local_1b0 * 8;
                  puVar23 = puVar23 + local_1a8 * 8;
                  uVar26 = uVar26 - 2;
                } while (uVar26 != 0);
                if ((local_c8 & 1) != 0) goto LAB_003ce76a;
              }
              if (local_128 != uVar27) {
                uVar18 = local_128;
                if ((uVar12 & 0x18) != 0) goto LAB_003ce7bb;
                goto LAB_003ce5c9;
              }
            }
            else {
LAB_003ce5c7:
              uVar18 = 0;
LAB_003ce5c9:
              uVar26 = ~uVar18;
              if (local_68 != 0) {
                puVar17 = (undefined1 *)(local_1b0 * uVar18 + local_198);
                puVar22 = (undefined1 *)(local_1a8 * uVar18 + local_190);
                lVar25 = 0;
                do {
                  *puVar22 = *puVar17;
                  lVar25 = lVar25 + -1;
                  puVar17 = puVar17 + local_1b0;
                  puVar22 = puVar22 + local_1a8;
                } while (-lVar25 != local_68);
                uVar18 = uVar18 - lVar25;
              }
              if (2 < uVar26 + uVar27) {
                lVar20 = uVar27 - uVar18;
                uVar26 = local_190;
                lVar25 = local_198;
                do {
                  *(undefined1 *)(uVar26 + uVar18 * local_1a8) =
                       *(undefined1 *)(lVar25 + local_1b0 * uVar18);
                  *(undefined1 *)(uVar26 + (uVar18 + 1) * local_1a8) =
                       *(undefined1 *)(lVar25 + local_1b0 * (uVar18 + 1));
                  *(undefined1 *)(uVar26 + (uVar18 + 2) * local_1a8) =
                       *(undefined1 *)(lVar25 + local_1b0 * (uVar18 + 2));
                  *(undefined1 *)(uVar26 + (uVar18 + 3) * local_1a8) =
                       *(undefined1 *)(lVar25 + local_1b0 * (uVar18 + 3));
                  lVar25 = lVar25 + local_70;
                  uVar26 = uVar26 + local_1a8 * 4;
                  lVar20 = lVar20 + -4;
                } while (lVar20 != 0);
              }
            }
LAB_003ce510:
            local_118 = (undefined8 *)((long)local_118 + local_110);
            local_120 = (undefined8 *)((long)local_120 + local_108);
            local_198 = local_198 + local_110;
            local_190 = local_190 + local_108;
            uVar18 = local_60 + 1;
            pIVar21 = local_1a0;
            local_188 = uVar27;
          } while (local_60 + 1 != local_148);
        }
        if (local_150 != (long *)0x0) {
          (**(code **)(*local_150 + 8))();
        }
        param_5 = local_b8;
        if (local_1c0 != (long *)0x0) {
          (**(code **)(*local_1c0 + 8))();
        }
        param_4 = local_b0;
      }
      else {
        local_1e8 = 0;
        fStack_1e0 = (float)*(undefined8 *)(lVar25 + 0x10);
        uStack_1dc = (undefined4)((ulong)*(undefined8 *)(lVar25 + 0x10) >> 0x20);
                    /* try { // try from 003ce18a to 003ce196 has its CatchHandler @ 003ceb24 */
        Image::clear(pIVar21,&local_1e8,_ZN4juce7ColoursL5blackE_344);
      }
    }
    local_1f0 = pIVar21;
    if (local_140 != (long *)0x0) {
      (**(code **)(*local_140 + 8))();
    }
  }
  LOCK();
  *(int *)(pIVar21 + 8) = *(int *)(pIVar21 + 8) + 1;
  UNLOCK();
                    /* try { // try from 003ce93d to 003ce951 has its CatchHandler @ 003cebbd */
  puVar15 = (undefined8 *)(**(code **)(*(long *)pIVar21 + 0x28))(pIVar21);
  if (puVar15 != (undefined8 *)0x0) {
    (**(code **)*puVar15)(puVar15,0);
  }
  uVar29 = SUB84((double)(local_58 * (float)(int)local_48) + _DAT_005d9a90,0);
  dStack_180 = (double)(local_58 * (float)local_48._4_4_) + _UNK_005d9a98;
  LOCK();
  pIVar3 = pIVar21 + 8;
  *(int *)pIVar3 = *(int *)pIVar3 + -1;
  UNLOCK();
  local_188 = CONCAT44(SUB84(dStack_180,0),uVar29);
  if (*(int *)pIVar3 == 0) {
    (**(code **)(*(long *)pIVar21 + 8))(pIVar21);
    uVar29 = (undefined4)local_188;
  }
  pIVar3 = local_1f0;
  LOCK();
  *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
  UNLOCK();
                    /* try { // try from 003ce9ab to 003ce9b2 has its CatchHandler @ 003cebaa */
  (**(code **)(*(long *)local_1f0 + 0x50))(local_1f0,0,*(long *)(local_1f0 + 0x10),uVar29);
  uVar12 = local_134 << 0x18;
  uVar19 = local_130 & 0xffffff;
  LOCK();
  pIVar21 = pIVar3 + 8;
  *(int *)pIVar21 = *(int *)pIVar21 + -1;
  UNLOCK();
  if (*(int *)pIVar21 == 0) {
    (**(code **)(*(long *)pIVar3 + 8))(pIVar3);
  }
                    /* try { // try from 003ce9dd to 003cea8b has its CatchHandler @ 003cebd5 */
  Graphics::setColour(param_5,uVar19 | uVar12);
  pIVar21 = local_1f0;
  fStack_1d4 = (float)SUB84((double)(local_138 * local_58) + DAT_005d9098,0);
  fStack_1e0 = (float)local_188._4_4_;
  local_1e8 = 0x3f800000;
  uStack_1dc = 0;
  uStack_1d8 = 0x3f800000;
  if (local_1f0 != (Image *)0x0) {
    cVar11 = (**(code **)(**(long **)(param_5 + 8) + 0x68))();
    if (cVar11 == '\0') {
      (**(code **)(**(long **)(param_5 + 8) + 0x70))();
      (**(code **)(**(long **)(param_5 + 8) + 0x50))(*(long **)(param_5 + 8),&local_1f0,&local_1e8);
      (**(code **)(**(long **)(param_5 + 8) + 0xa8))();
      (**(code **)(**(long **)(param_5 + 8) + 0x78))();
      pIVar21 = local_1f0;
      if (local_1f0 == (Image *)0x0) goto LAB_003ceaa7;
    }
    LOCK();
    pIVar3 = pIVar21 + 8;
    *(int *)pIVar3 = *(int *)pIVar3 + -1;
    UNLOCK();
    if (*(int *)pIVar3 == 0) {
      (**(code **)(*(long *)pIVar21 + 8))(pIVar21);
    }
  }
LAB_003ceaa7:
  if (param_5[0x10] != (Graphics)0x0) {
    param_5[0x10] = (Graphics)0x0;
    (**(code **)(**(long **)(param_5 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_5 + 8) + 0x98))(local_12c);
  local_1e8 = (ulong)DAT_005d9038;
  fStack_1e0 = 0.0;
  uStack_1dc = 0;
  uStack_1d8 = 0x3f800000;
  fStack_1d4 = 0.0;
  if ((*param_4 != 0) && (cVar11 = (**(code **)(**(long **)(param_5 + 8) + 0x68))(), cVar11 == '\0')
     ) {
    (**(code **)(**(long **)(param_5 + 8) + 0xe0))(*(long **)(param_5 + 8),param_4,&local_1e8);
  }
  return;
}


