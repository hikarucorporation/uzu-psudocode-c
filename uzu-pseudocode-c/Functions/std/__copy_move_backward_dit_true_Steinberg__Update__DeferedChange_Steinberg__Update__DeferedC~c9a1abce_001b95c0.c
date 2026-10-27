// Function : __copy_move_backward_dit<true,Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*,std::_Deque_iterator<Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*>>
// Namespace: std
// Entry    : 001b95c0
// Prototype: _Deque_iterator __copy_move_backward_dit<true,Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*,std::_Deque_iterator<Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*>>(long * param_1, long * param_2, long * param_3, long * param_4)
// Body     : 001b95c0 - 001b9d8a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Deque_iterator<Steinberg::Update::DeferedChange, Steinberg::Update::DeferedChange&,
   Steinberg::Update::DeferedChange*> std::__copy_move_backward_dit<true,
   Steinberg::Update::DeferedChange, Steinberg::Update::DeferedChange&,
   Steinberg::Update::DeferedChange*, std::_Deque_iterator<Steinberg::Update::DeferedChange,
   Steinberg::Update::DeferedChange&, Steinberg::Update::DeferedChange*>
   >(std::_Deque_iterator<Steinberg::Update::DeferedChange, Steinberg::Update::DeferedChange&,
   Steinberg::Update::DeferedChange*>, std::_Deque_iterator<Steinberg::Update::DeferedChange,
   Steinberg::Update::DeferedChange&, Steinberg::Update::DeferedChange*>,
   std::_Deque_iterator<Steinberg::Update::DeferedChange, Steinberg::Update::DeferedChange&,
   Steinberg::Update::DeferedChange*>) */

void __cdecl
std::
__copy_move_backward_dit<true,Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*,std::_Deque_iterator<Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*>>
          (long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  
  if (param_2[3] == param_3[3]) {
    lVar14 = *param_3;
    lVar6 = *param_4;
    lVar13 = param_4[1];
    lVar12 = param_4[2];
    lVar11 = param_4[3];
    if (0 < lVar14 - *param_2) {
      uVar4 = (ulong)(lVar14 - *param_2) >> 4;
LAB_001b9c16:
      do {
        uVar7 = lVar6 - lVar13 >> 4;
        if (lVar6 - lVar13 == 0) {
          lVar10 = *(long *)(lVar11 + -8) + 0x200;
          uVar8 = 0x20;
          if ((long)uVar4 < 0x21) {
            uVar8 = uVar4;
          }
          if ((long)uVar8 < 1) goto LAB_001b9c3a;
LAB_001b9c68:
          uVar7 = uVar8;
          lVar5 = lVar14;
          if ((uVar8 & 3) != 0) {
            uVar7 = 0;
            do {
              *(undefined4 *)(lVar10 + -8) = *(undefined4 *)(lVar5 + -8);
              puVar1 = (undefined8 *)(lVar5 + -0x10);
              lVar5 = lVar5 + -0x10;
              *(undefined8 *)(lVar10 + -0x10) = *puVar1;
              lVar10 = lVar10 + -0x10;
              uVar7 = uVar7 + 1;
            } while ((uVar8 & 3) != uVar7);
            uVar7 = uVar8 - uVar7;
          }
          if (2 < uVar8 - 1) {
            uVar7 = uVar7 - 1;
            lVar9 = -0x10;
            do {
              *(undefined4 *)(lVar10 + 8 + lVar9) = *(undefined4 *)(lVar5 + 8 + lVar9);
              *(undefined8 *)(lVar10 + lVar9) = *(undefined8 *)(lVar5 + lVar9);
              *(undefined4 *)(lVar10 + -8 + lVar9) = *(undefined4 *)(lVar5 + -8 + lVar9);
              *(undefined8 *)(lVar10 + -0x10 + lVar9) = *(undefined8 *)(lVar5 + -0x10 + lVar9);
              *(undefined4 *)(lVar10 + -0x18 + lVar9) = *(undefined4 *)(lVar5 + -0x18 + lVar9);
              *(undefined8 *)(lVar10 + -0x20 + lVar9) = *(undefined8 *)(lVar5 + -0x20 + lVar9);
              *(undefined8 *)(lVar10 + -0x30 + lVar9) = *(undefined8 *)(lVar5 + -0x30 + lVar9);
              *(undefined4 *)(lVar10 + -0x28 + lVar9) = *(undefined4 *)(lVar5 + -0x28 + lVar9);
              uVar7 = uVar7 - 4;
              lVar9 = lVar9 + -0x40;
            } while (uVar7 < 0xfffffffffffffffe);
          }
          lVar10 = uVar8 << 4;
          uVar7 = (lVar6 - lVar13 >> 4) - uVar8;
          if ((long)uVar7 < 0) goto LAB_001b9be0;
LAB_001b9d3e:
          if (uVar7 < 0x20) {
            lVar6 = lVar6 + uVar8 * -0x10;
            lVar14 = lVar14 - lVar10;
            uVar7 = uVar4 - uVar8;
            bVar2 = (long)uVar4 < (long)uVar8;
            uVar4 = uVar7;
            if (uVar7 == 0 || bVar2) break;
            goto LAB_001b9c16;
          }
          uVar3 = uVar7 >> 5;
        }
        else {
          uVar8 = uVar7;
          if ((long)uVar4 <= (long)uVar7) {
            uVar8 = uVar4;
          }
          lVar10 = lVar6;
          if (0 < (long)uVar8) goto LAB_001b9c68;
LAB_001b9c3a:
          lVar10 = uVar8 << 4;
          uVar7 = uVar7 - uVar8;
          if (-1 < (long)uVar7) goto LAB_001b9d3e;
LAB_001b9be0:
          uVar3 = uVar7 >> 5 | 0xf800000000000000;
        }
        lVar13 = *(long *)(lVar11 + uVar3 * 8);
        lVar11 = lVar11 + uVar3 * 8;
        lVar12 = lVar13 + 0x200;
        lVar6 = (uVar7 + uVar3 * -0x20) * 0x10 + lVar13;
        lVar14 = lVar14 - lVar10;
        uVar7 = uVar4 - uVar8;
        bVar2 = (long)uVar8 <= (long)uVar4;
        uVar4 = uVar7;
      } while (uVar7 != 0 && bVar2);
    }
  }
  else {
    lVar14 = *param_3;
    lVar6 = *param_4;
    lVar13 = param_4[1];
    lVar12 = param_4[2];
    lVar11 = param_4[3];
    if (0 < lVar14 - param_3[1]) {
      uVar4 = (ulong)(lVar14 - param_3[1]) >> 4;
LAB_001b9656:
      do {
        uVar7 = lVar6 - lVar13 >> 4;
        if (lVar6 - lVar13 == 0) {
          lVar10 = *(long *)(lVar11 + -8) + 0x200;
          uVar8 = 0x20;
          if ((long)uVar4 < 0x21) {
            uVar8 = uVar4;
          }
          if ((long)uVar8 < 1) goto LAB_001b967a;
LAB_001b96ae:
          lVar5 = lVar14;
          uVar7 = uVar8;
          if ((uVar8 & 3) != 0) {
            uVar7 = 0;
            do {
              *(undefined4 *)(lVar10 + -8) = *(undefined4 *)(lVar5 + -8);
              puVar1 = (undefined8 *)(lVar5 + -0x10);
              lVar5 = lVar5 + -0x10;
              *(undefined8 *)(lVar10 + -0x10) = *puVar1;
              lVar10 = lVar10 + -0x10;
              uVar7 = uVar7 + 1;
            } while ((uVar8 & 3) != uVar7);
            uVar7 = uVar8 - uVar7;
          }
          if (2 < uVar8 - 1) {
            uVar7 = uVar7 - 1;
            lVar9 = -0x10;
            do {
              *(undefined4 *)(lVar10 + 8 + lVar9) = *(undefined4 *)(lVar5 + 8 + lVar9);
              *(undefined8 *)(lVar10 + lVar9) = *(undefined8 *)(lVar5 + lVar9);
              *(undefined4 *)(lVar10 + -8 + lVar9) = *(undefined4 *)(lVar5 + -8 + lVar9);
              *(undefined8 *)(lVar10 + -0x10 + lVar9) = *(undefined8 *)(lVar5 + -0x10 + lVar9);
              *(undefined4 *)(lVar10 + -0x18 + lVar9) = *(undefined4 *)(lVar5 + -0x18 + lVar9);
              *(undefined8 *)(lVar10 + -0x20 + lVar9) = *(undefined8 *)(lVar5 + -0x20 + lVar9);
              *(undefined8 *)(lVar10 + -0x30 + lVar9) = *(undefined8 *)(lVar5 + -0x30 + lVar9);
              *(undefined4 *)(lVar10 + -0x28 + lVar9) = *(undefined4 *)(lVar5 + -0x28 + lVar9);
              uVar7 = uVar7 - 4;
              lVar9 = lVar9 + -0x40;
            } while (uVar7 < 0xfffffffffffffffe);
          }
          lVar10 = uVar8 << 4;
          uVar7 = (lVar6 - lVar13 >> 4) - uVar8;
          if ((long)uVar7 < 0) goto LAB_001b9620;
LAB_001b977f:
          if (uVar7 < 0x20) {
            lVar6 = lVar6 + uVar8 * -0x10;
            lVar14 = lVar14 - lVar10;
            uVar7 = uVar4 - uVar8;
            bVar2 = (long)uVar4 < (long)uVar8;
            uVar4 = uVar7;
            if (uVar7 == 0 || bVar2) break;
            goto LAB_001b9656;
          }
          uVar3 = uVar7 >> 5;
        }
        else {
          uVar8 = uVar7;
          if ((long)uVar4 <= (long)uVar7) {
            uVar8 = uVar4;
          }
          lVar10 = lVar6;
          if (0 < (long)uVar8) goto LAB_001b96ae;
LAB_001b967a:
          lVar10 = uVar8 << 4;
          uVar7 = uVar7 - uVar8;
          if (-1 < (long)uVar7) goto LAB_001b977f;
LAB_001b9620:
          uVar3 = uVar7 >> 5 | 0xf800000000000000;
        }
        lVar13 = *(long *)(lVar11 + uVar3 * 8);
        lVar11 = lVar11 + uVar3 * 8;
        lVar12 = lVar13 + 0x200;
        lVar6 = (uVar7 + uVar3 * -0x20) * 0x10 + lVar13;
        lVar14 = lVar14 - lVar10;
        uVar7 = uVar4 - uVar8;
        bVar2 = (long)uVar8 <= (long)uVar4;
        uVar4 = uVar7;
      } while (uVar7 != 0 && bVar2);
    }
    *param_4 = lVar6;
    param_4[1] = lVar13;
    param_4[2] = lVar12;
    param_4[3] = lVar11;
    plVar15 = (long *)(param_3[3] + -8);
    if (plVar15 != (long *)param_2[3]) {
      do {
        lVar14 = *plVar15 + 0x200;
        uVar4 = 0x20;
LAB_001b985c:
        do {
          uVar7 = lVar6 - lVar13 >> 4;
          if (lVar6 - lVar13 == 0) {
            lVar10 = *(long *)(lVar11 + -8) + 0x200;
            uVar8 = 0x20;
            if ((long)uVar4 < 0x21) {
              uVar8 = uVar4;
            }
            if ((long)uVar8 < 1) goto LAB_001b9880;
LAB_001b98b8:
            uVar7 = uVar8;
            lVar5 = lVar14;
            if ((uVar8 & 3) != 0) {
              uVar7 = 0;
              do {
                *(undefined4 *)(lVar10 + -8) = *(undefined4 *)(lVar5 + -8);
                puVar1 = (undefined8 *)(lVar5 + -0x10);
                lVar5 = lVar5 + -0x10;
                *(undefined8 *)(lVar10 + -0x10) = *puVar1;
                lVar10 = lVar10 + -0x10;
                uVar7 = uVar7 + 1;
              } while ((uVar8 & 3) != uVar7);
              uVar7 = uVar8 - uVar7;
            }
            if (2 < uVar8 - 1) {
              uVar7 = uVar7 - 1;
              lVar9 = -0x10;
              do {
                *(undefined4 *)(lVar10 + 8 + lVar9) = *(undefined4 *)(lVar5 + 8 + lVar9);
                *(undefined8 *)(lVar10 + lVar9) = *(undefined8 *)(lVar5 + lVar9);
                *(undefined4 *)(lVar10 + -8 + lVar9) = *(undefined4 *)(lVar5 + -8 + lVar9);
                *(undefined8 *)(lVar10 + -0x10 + lVar9) = *(undefined8 *)(lVar5 + -0x10 + lVar9);
                *(undefined4 *)(lVar10 + -0x18 + lVar9) = *(undefined4 *)(lVar5 + -0x18 + lVar9);
                *(undefined8 *)(lVar10 + -0x20 + lVar9) = *(undefined8 *)(lVar5 + -0x20 + lVar9);
                *(undefined8 *)(lVar10 + -0x30 + lVar9) = *(undefined8 *)(lVar5 + -0x30 + lVar9);
                *(undefined4 *)(lVar10 + -0x28 + lVar9) = *(undefined4 *)(lVar5 + -0x28 + lVar9);
                uVar7 = uVar7 - 4;
                lVar9 = lVar9 + -0x40;
              } while (uVar7 < 0xfffffffffffffffe);
            }
            lVar10 = uVar8 << 4;
            uVar7 = (lVar6 - lVar13 >> 4) - uVar8;
            if ((long)uVar7 < 0) goto LAB_001b9820;
LAB_001b998f:
            if (uVar7 < 0x20) {
              lVar6 = lVar6 + uVar8 * -0x10;
              lVar14 = lVar14 - lVar10;
              uVar7 = uVar4 - uVar8;
              bVar2 = (long)uVar4 < (long)uVar8;
              uVar4 = uVar7;
              if (uVar7 == 0 || bVar2) break;
              goto LAB_001b985c;
            }
            uVar3 = uVar7 >> 5;
          }
          else {
            uVar8 = uVar7;
            if ((long)uVar4 <= (long)uVar7) {
              uVar8 = uVar4;
            }
            lVar10 = lVar6;
            if (0 < (long)uVar8) goto LAB_001b98b8;
LAB_001b9880:
            lVar10 = uVar8 << 4;
            uVar7 = uVar7 - uVar8;
            if (-1 < (long)uVar7) goto LAB_001b998f;
LAB_001b9820:
            uVar3 = uVar7 >> 5 | 0xf800000000000000;
          }
          lVar13 = *(long *)(lVar11 + uVar3 * 8);
          lVar11 = lVar11 + uVar3 * 8;
          lVar12 = lVar13 + 0x200;
          lVar6 = (uVar7 + uVar3 * -0x20) * 0x10 + lVar13;
          lVar14 = lVar14 - lVar10;
          uVar7 = uVar4 - uVar8;
          bVar2 = (long)uVar8 <= (long)uVar4;
          uVar4 = uVar7;
        } while (uVar7 != 0 && bVar2);
        *param_4 = lVar6;
        param_4[1] = lVar13;
        param_4[2] = lVar12;
        param_4[3] = lVar11;
        plVar15 = plVar15 + -1;
      } while (plVar15 != (long *)param_2[3]);
    }
    lVar14 = param_2[2];
    if (0 < lVar14 - *param_2) {
      uVar4 = (ulong)(lVar14 - *param_2) >> 4;
LAB_001b9a30:
      do {
        uVar7 = lVar6 - lVar13 >> 4;
        if (lVar6 - lVar13 == 0) {
          lVar10 = *(long *)(lVar11 + -8) + 0x200;
          uVar8 = 0x20;
          if ((long)uVar4 < 0x21) {
            uVar8 = uVar4;
          }
          if ((long)uVar8 < 1) goto LAB_001b9a54;
LAB_001b9a88:
          uVar7 = uVar8;
          lVar5 = lVar14;
          if ((uVar8 & 3) != 0) {
            uVar7 = 0;
            do {
              *(undefined4 *)(lVar10 + -8) = *(undefined4 *)(lVar5 + -8);
              puVar1 = (undefined8 *)(lVar5 + -0x10);
              lVar5 = lVar5 + -0x10;
              *(undefined8 *)(lVar10 + -0x10) = *puVar1;
              lVar10 = lVar10 + -0x10;
              uVar7 = uVar7 + 1;
            } while ((uVar8 & 3) != uVar7);
            uVar7 = uVar8 - uVar7;
          }
          if (2 < uVar8 - 1) {
            uVar7 = uVar7 - 1;
            lVar9 = -0x10;
            do {
              *(undefined4 *)(lVar10 + 8 + lVar9) = *(undefined4 *)(lVar5 + 8 + lVar9);
              *(undefined8 *)(lVar10 + lVar9) = *(undefined8 *)(lVar5 + lVar9);
              *(undefined4 *)(lVar10 + -8 + lVar9) = *(undefined4 *)(lVar5 + -8 + lVar9);
              *(undefined8 *)(lVar10 + -0x10 + lVar9) = *(undefined8 *)(lVar5 + -0x10 + lVar9);
              *(undefined4 *)(lVar10 + -0x18 + lVar9) = *(undefined4 *)(lVar5 + -0x18 + lVar9);
              *(undefined8 *)(lVar10 + -0x20 + lVar9) = *(undefined8 *)(lVar5 + -0x20 + lVar9);
              *(undefined8 *)(lVar10 + -0x30 + lVar9) = *(undefined8 *)(lVar5 + -0x30 + lVar9);
              *(undefined4 *)(lVar10 + -0x28 + lVar9) = *(undefined4 *)(lVar5 + -0x28 + lVar9);
              uVar7 = uVar7 - 4;
              lVar9 = lVar9 + -0x40;
            } while (uVar7 < 0xfffffffffffffffe);
          }
          lVar10 = uVar8 << 4;
          uVar7 = (lVar6 - lVar13 >> 4) - uVar8;
          if ((long)uVar7 < 0) goto LAB_001b99f0;
LAB_001b9b5e:
          if (uVar7 < 0x20) {
            lVar6 = lVar6 + uVar8 * -0x10;
            lVar14 = lVar14 - lVar10;
            uVar7 = uVar4 - uVar8;
            bVar2 = (long)uVar4 < (long)uVar8;
            uVar4 = uVar7;
            if (uVar7 == 0 || bVar2) break;
            goto LAB_001b9a30;
          }
          uVar3 = uVar7 >> 5;
        }
        else {
          uVar8 = uVar7;
          if ((long)uVar4 <= (long)uVar7) {
            uVar8 = uVar4;
          }
          lVar10 = lVar6;
          if (0 < (long)uVar8) goto LAB_001b9a88;
LAB_001b9a54:
          lVar10 = uVar8 << 4;
          uVar7 = uVar7 - uVar8;
          if (-1 < (long)uVar7) goto LAB_001b9b5e;
LAB_001b99f0:
          uVar3 = uVar7 >> 5 | 0xf800000000000000;
        }
        lVar13 = *(long *)(lVar11 + uVar3 * 8);
        lVar11 = lVar11 + uVar3 * 8;
        lVar12 = lVar13 + 0x200;
        lVar6 = (uVar7 + uVar3 * -0x20) * 0x10 + lVar13;
        lVar14 = lVar14 - lVar10;
        uVar7 = uVar4 - uVar8;
        bVar2 = (long)uVar8 <= (long)uVar4;
        uVar4 = uVar7;
      } while (uVar7 != 0 && bVar2);
    }
  }
  *param_1 = lVar6;
  param_1[1] = lVar13;
  param_1[2] = lVar12;
  param_1[3] = lVar11;
  return;
}


