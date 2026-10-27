// Function : vector
// Namespace: std:vector_juce__GlyphLayer_std__allocator_juce__GlyphLayer__
// Entry    : 00353080
// Prototype: undefined vector(vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>> * this, long * param_1)
// Body     : 00353080 - 00353330


/* std::vector<juce::GlyphLayer, std::allocator<juce::GlyphLayer>
   >::vector(std::vector<juce::GlyphLayer, std::allocator<juce::GlyphLayer> > const&) */

void __thiscall
std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>::vector
          (vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>> *this,long *param_1)

{
  undefined8 *puVar1;
  size_t __size;
  undefined8 *puVar2;
  long lVar3;
  ulong *puVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  void *pvVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  
  lVar14 = param_1[1];
  lVar3 = *param_1;
  uVar19 = lVar14 - lVar3 >> 6;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (lVar14 - lVar3 == 0) {
    puVar9 = (ulong *)0x0;
  }
  else {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar19;
    if (SUB168(auVar5 * ZEXT816(0x40),8) != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_bad_array_new_length();
    }
    puVar9 = operator_new(SUB168(auVar5 * ZEXT816(0x40),0));
  }
  *(ulong **)this = puVar9;
  *(ulong **)(this + 8) = puVar9;
  *(ulong **)(this + 0x10) = puVar9 + uVar19 * 8;
  puVar12 = (ulong *)*param_1;
  puVar4 = (ulong *)param_1[1];
  do {
    if (puVar12 == puVar4) {
      *(ulong **)(this + 8) = puVar9;
      return;
    }
    *(undefined1 *)(puVar9 + 7) = 0xff;
    if ((char)puVar12[7] != -1) {
      if ((char)puVar12[7] == '\x01') {
        uVar19 = *puVar12;
        *puVar9 = uVar19;
        if (uVar19 != 0) {
          LOCK();
          *(int *)(uVar19 + 8) = *(int *)(uVar19 + 8) + 1;
          UNLOCK();
        }
        puVar9[3] = puVar12[3];
        uVar19 = puVar12[2];
        puVar9[1] = puVar12[1];
        puVar9[2] = uVar19;
      }
      else {
        uVar19 = puVar12[1];
        __size = uVar19 * 4;
        if (__size == 0) {
          pvVar10 = (void *)0x0;
        }
        else {
          pvVar10 = malloc(__size);
        }
        *puVar9 = (ulong)pvVar10;
        puVar9[1] = uVar19;
        if (0 < (long)puVar12[1]) {
          uVar11 = puVar12[1] & 0x3fffffffffffffff;
          uVar19 = *puVar12;
          uVar17 = (uVar11 - (uVar11 != 0)) + 1;
          if ((7 < uVar17) &&
             ((lVar14 = uVar11 - (uVar11 != 0), (void *)(uVar19 + lVar14 * 4 + 4) <= pvVar10 ||
              ((ulong)((long)pvVar10 + lVar14 * 4 + 4) <= uVar19)))) {
            uVar16 = uVar17 & 0xfffffffffffffff8;
            uVar15 = (uVar16 - 8 >> 3) + 1;
            uVar18 = (ulong)((uint)uVar15 & 3);
            if (uVar16 - 8 < 0x18) {
              lVar14 = 0;
            }
            else {
              uVar15 = uVar15 & 0x3ffffffffffffffc;
              lVar14 = 0;
              do {
                puVar1 = (undefined8 *)(uVar19 + lVar14 * 4);
                uVar6 = puVar1[1];
                puVar2 = (undefined8 *)(uVar19 + 0x10 + lVar14 * 4);
                uVar7 = *puVar2;
                uVar8 = puVar2[1];
                puVar2 = (undefined8 *)((long)pvVar10 + lVar14 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar6;
                puVar1 = (undefined8 *)((long)pvVar10 + lVar14 * 4 + 0x10);
                *puVar1 = uVar7;
                puVar1[1] = uVar8;
                puVar1 = (undefined8 *)(uVar19 + 0x20 + lVar14 * 4);
                uVar6 = puVar1[1];
                puVar2 = (undefined8 *)(uVar19 + 0x30 + lVar14 * 4);
                uVar7 = *puVar2;
                uVar8 = puVar2[1];
                puVar2 = (undefined8 *)((long)pvVar10 + lVar14 * 4 + 0x20);
                *puVar2 = *puVar1;
                puVar2[1] = uVar6;
                puVar1 = (undefined8 *)((long)pvVar10 + lVar14 * 4 + 0x30);
                *puVar1 = uVar7;
                puVar1[1] = uVar8;
                puVar1 = (undefined8 *)(uVar19 + 0x40 + lVar14 * 4);
                uVar6 = puVar1[1];
                puVar2 = (undefined8 *)(uVar19 + 0x50 + lVar14 * 4);
                uVar7 = *puVar2;
                uVar8 = puVar2[1];
                puVar2 = (undefined8 *)((long)pvVar10 + lVar14 * 4 + 0x40);
                *puVar2 = *puVar1;
                puVar2[1] = uVar6;
                puVar1 = (undefined8 *)((long)pvVar10 + lVar14 * 4 + 0x50);
                *puVar1 = uVar7;
                puVar1[1] = uVar8;
                puVar1 = (undefined8 *)(uVar19 + 0x60 + lVar14 * 4);
                uVar6 = puVar1[1];
                puVar2 = (undefined8 *)(uVar19 + 0x70 + lVar14 * 4);
                uVar7 = *puVar2;
                uVar8 = puVar2[1];
                puVar2 = (undefined8 *)((long)pvVar10 + lVar14 * 4 + 0x60);
                *puVar2 = *puVar1;
                puVar2[1] = uVar6;
                puVar1 = (undefined8 *)((long)pvVar10 + lVar14 * 4 + 0x70);
                *puVar1 = uVar7;
                puVar1[1] = uVar8;
                lVar14 = lVar14 + 0x20;
                uVar15 = uVar15 - 4;
              } while (uVar15 != 0);
            }
            if (uVar18 != 0) {
              lVar3 = uVar19 + lVar14 * 4;
              lVar13 = 0;
              do {
                puVar2 = (undefined8 *)(lVar3 + lVar13);
                uVar6 = puVar2[1];
                puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar13);
                uVar7 = *puVar1;
                uVar8 = puVar1[1];
                puVar1 = (undefined8 *)((long)pvVar10 + lVar13 + lVar14 * 4);
                *puVar1 = *puVar2;
                puVar1[1] = uVar6;
                puVar1 = (undefined8 *)((long)pvVar10 + lVar13 + lVar14 * 4 + 0x10);
                *puVar1 = uVar7;
                puVar1[1] = uVar8;
                lVar13 = lVar13 + 0x20;
              } while (uVar18 * 0x20 != lVar13);
            }
            if (uVar17 == uVar16) goto LAB_00353110;
            uVar11 = uVar11 - uVar16;
            pvVar10 = (void *)((long)pvVar10 + uVar16 * 4);
            uVar19 = uVar19 + uVar16 * 4;
          }
          uVar11 = uVar11 + 1;
          lVar14 = 0;
          do {
            *(undefined4 *)((long)pvVar10 + lVar14) = *(undefined4 *)(uVar19 + lVar14);
            uVar11 = uVar11 - 1;
            lVar14 = lVar14 + 4;
          } while (1 < uVar11);
        }
LAB_00353110:
        uVar19 = puVar12[2];
        uVar11 = puVar12[3];
        uVar6 = *(undefined8 *)((long)puVar12 + 0x21);
        *(undefined8 *)((long)puVar9 + 0x19) = *(undefined8 *)((long)puVar12 + 0x19);
        *(undefined8 *)((long)puVar9 + 0x21) = uVar6;
        puVar9[2] = uVar19;
        puVar9[3] = uVar11;
        *(int *)(puVar9 + 6) = (int)puVar12[6];
        *(undefined1 *)((long)puVar9 + 0x34) = *(undefined1 *)((long)puVar12 + 0x34);
      }
    }
    *(char *)(puVar9 + 7) = (char)puVar12[7];
    puVar12 = puVar12 + 8;
    puVar9 = puVar9 + 8;
  } while( true );
}


