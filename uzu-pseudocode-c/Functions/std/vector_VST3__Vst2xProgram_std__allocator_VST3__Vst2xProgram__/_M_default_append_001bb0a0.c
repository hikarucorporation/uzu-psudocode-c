// Function : _M_default_append
// Namespace: std:vector_VST3__Vst2xProgram_std__allocator_VST3__Vst2xProgram__
// Entry    : 001bb0a0
// Prototype: undefined _M_default_append(vector<VST3::Vst2xProgram,std::allocator<VST3::Vst2xProgram>> * this, ulong param_1)
// Body     : 001bb0a0 - 001bb719


/* std::vector<VST3::Vst2xProgram, std::allocator<VST3::Vst2xProgram> >::_M_default_append(unsigned
   long) */

void __thiscall
std::vector<VST3::Vst2xProgram,std::allocator<VST3::Vst2xProgram>>::_M_default_append
          (vector<VST3::Vst2xProgram,std::allocator<VST3::Vst2xProgram>> *this,ulong param_1)

{
  undefined1 *puVar1;
  void *__dest;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *__src;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  if (param_1 != 0) {
    puVar8 = *(undefined8 **)(this + 8);
    if ((ulong)((*(long *)(this + 0x10) - (long)puVar8 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_1) {
      puVar3 = *(undefined8 **)this;
      lVar12 = (long)puVar8 - (long)puVar3 >> 3;
      uVar13 = lVar12 * 0x2e8ba2e8ba2e8ba3;
      if (lVar12 * -0x2e8ba2e8ba2e8ba3 + 0x1745d1745d1745dU < param_1) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_default_append");
      }
      uVar7 = uVar13;
      if (uVar13 < param_1) {
        uVar7 = param_1;
      }
      uVar6 = uVar7 + uVar13;
      if (0x1745d1745d1745d < uVar6) {
        uVar6 = 0x1745d1745d1745d;
      }
      if (CARRY8(uVar7,uVar13)) {
        uVar6 = 0x1745d1745d1745d;
      }
      if (uVar6 == 0) {
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = operator_new(uVar6 * 0x58);
      }
      puVar10 = (undefined8 *)(lVar12 * 8 + (long)pvVar5);
      uVar13 = param_1;
      puVar9 = puVar10;
      if ((param_1 & 7) != 0) {
        uVar13 = 0;
        do {
          puVar9[6] = 0;
          puVar9[7] = 0;
          puVar9[8] = 0;
          puVar9[9] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[10] = 0;
          puVar9[7] = puVar9 + 9;
          puVar9 = puVar9 + 0xb;
          uVar13 = uVar13 + 1;
        } while ((param_1 & 7) != uVar13);
        uVar13 = param_1 - uVar13;
      }
      if (6 < param_1 - 1) {
        do {
          puVar9[6] = 0;
          puVar9[7] = 0;
          puVar9[8] = 0;
          puVar9[9] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[10] = 0;
          puVar9[7] = puVar9 + 9;
          puVar9[0x11] = 0;
          puVar9[0x12] = 0;
          puVar9[0xb] = 0;
          puVar9[0xc] = 0;
          puVar9[0xd] = 0;
          puVar9[0xe] = 0;
          puVar9[0xf] = 0;
          puVar9[0x10] = 0;
          puVar9[0x13] = 0;
          puVar9[0x14] = 0;
          puVar9[0x15] = 0;
          puVar9[0x12] = puVar9 + 0x14;
          puVar9[0x16] = 0;
          puVar9[0x17] = 0;
          puVar9[0x18] = 0;
          puVar9[0x19] = 0;
          puVar9[0x1a] = 0;
          puVar9[0x1b] = 0;
          puVar9[0x1c] = 0;
          puVar9[0x1d] = 0;
          puVar9[0x1e] = 0;
          puVar9[0x1f] = 0;
          puVar9[0x20] = 0;
          puVar9[0x1d] = puVar9 + 0x1f;
          puVar9[0x27] = 0;
          puVar9[0x28] = 0;
          puVar9[0x21] = 0;
          puVar9[0x22] = 0;
          puVar9[0x23] = 0;
          puVar9[0x24] = 0;
          puVar9[0x25] = 0;
          puVar9[0x26] = 0;
          puVar9[0x29] = 0;
          puVar9[0x2a] = 0;
          puVar9[0x2b] = 0;
          puVar9[0x28] = puVar9 + 0x2a;
          puVar9[0x32] = 0;
          puVar9[0x33] = 0;
          puVar9[0x2c] = 0;
          puVar9[0x2d] = 0;
          puVar9[0x2e] = 0;
          puVar9[0x2f] = 0;
          puVar9[0x30] = 0;
          puVar9[0x31] = 0;
          puVar9[0x34] = 0;
          puVar9[0x35] = 0;
          puVar9[0x36] = 0;
          puVar9[0x33] = puVar9 + 0x35;
          puVar9[0x37] = 0;
          puVar9[0x38] = 0;
          puVar9[0x39] = 0;
          puVar9[0x3a] = 0;
          puVar9[0x3b] = 0;
          puVar9[0x3c] = 0;
          puVar9[0x3d] = 0;
          puVar9[0x3e] = 0;
          puVar9[0x3f] = 0;
          puVar9[0x40] = 0;
          puVar9[0x41] = 0;
          puVar9[0x3e] = puVar9 + 0x40;
          puVar9[0x48] = 0;
          puVar9[0x49] = 0;
          puVar9[0x4a] = 0;
          puVar9[0x4b] = 0;
          puVar9[0x46] = 0;
          puVar9[0x47] = 0;
          puVar9[0x44] = 0;
          puVar9[0x45] = 0;
          puVar9[0x42] = 0;
          puVar9[0x43] = 0;
          puVar9[0x4c] = 0;
          puVar9[0x49] = puVar9 + 0x4b;
          puVar9[0x53] = 0;
          puVar9[0x54] = 0;
          puVar9[0x55] = 0;
          puVar9[0x56] = 0;
          puVar9[0x51] = 0;
          puVar9[0x52] = 0;
          puVar9[0x4f] = 0;
          puVar9[0x50] = 0;
          puVar9[0x4d] = 0;
          puVar9[0x4e] = 0;
          puVar9[0x57] = 0;
          puVar9[0x54] = puVar9 + 0x56;
          puVar9 = puVar9 + 0x58;
          uVar13 = uVar13 - 8;
        } while (uVar13 != 0);
      }
      if (puVar3 != puVar8) {
        lVar12 = 0x48;
        do {
          puVar1 = (undefined1 *)(lVar12 + (long)puVar3);
          puVar9 = (undefined8 *)((long)puVar3 + lVar12 + -0x48);
          uVar4 = puVar9[1];
          __dest = (void *)((long)pvVar5 + lVar12);
          puVar2 = (undefined8 *)((long)pvVar5 + lVar12 + -0x48);
          *puVar2 = *puVar9;
          puVar2[1] = uVar4;
          *(undefined8 *)((long)pvVar5 + lVar12 + -0x38) =
               *(undefined8 *)((long)puVar3 + lVar12 + -0x38);
          puVar9 = (undefined8 *)((long)puVar3 + lVar12 + -0x48);
          *puVar9 = 0;
          puVar9[1] = 0;
          *(undefined8 *)((long)puVar3 + lVar12 + -0x38) = 0;
          puVar9 = (undefined8 *)((long)puVar3 + lVar12 + -0x30);
          uVar4 = puVar9[1];
          puVar2 = (undefined8 *)((long)pvVar5 + lVar12 + -0x30);
          *puVar2 = *puVar9;
          puVar2[1] = uVar4;
          *(undefined8 *)((long)pvVar5 + lVar12 + -0x20) =
               *(undefined8 *)((long)puVar3 + lVar12 + -0x20);
          puVar9 = (undefined8 *)((long)puVar3 + lVar12 + -0x30);
          *puVar9 = 0;
          puVar9[1] = 0;
          *(undefined8 *)((long)puVar3 + lVar12 + -0x20) = 0;
          *(undefined8 *)((long)pvVar5 + lVar12 + -0x18) =
               *(undefined8 *)((long)puVar3 + lVar12 + -0x18);
          *(void **)((long)pvVar5 + lVar12 + -0x10) = __dest;
          __src = *(undefined1 **)((long)puVar3 + lVar12 + -0x10);
          if (__src == puVar1) {
            lVar11 = *(long *)((long)puVar3 + lVar12 + -8);
            memcpy(__dest,__src,lVar11 + 1);
          }
          else {
            *(undefined1 **)((long)pvVar5 + lVar12 + -0x10) = __src;
            *(undefined8 *)((long)pvVar5 + lVar12) = *(undefined8 *)((long)puVar3 + lVar12);
            lVar11 = *(long *)((long)puVar3 + lVar12 + -8);
          }
          *(long *)((long)__dest + -8) = lVar11;
          *(undefined1 **)(puVar1 + -0x10) = puVar1;
          *(undefined8 *)(puVar1 + -8) = 0;
          *puVar1 = 0;
          lVar12 = lVar12 + 0x58;
        } while ((undefined8 *)(puVar1 + 0x10) != puVar8);
      }
      if (puVar3 != (undefined8 *)0x0) {
        operator_delete(puVar3);
      }
      *(void **)this = pvVar5;
      *(undefined8 **)(this + 8) = puVar10 + param_1 * 0xb;
      *(void **)(this + 0x10) = (void *)(uVar6 * 0x58 + (long)pvVar5);
    }
    else {
      uVar13 = param_1 - 1;
      if ((param_1 & 7) != 0) {
        uVar7 = 0;
        do {
          puVar8[6] = 0;
          puVar8[7] = 0;
          puVar8[8] = 0;
          puVar8[9] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[10] = 0;
          puVar8[7] = puVar8 + 9;
          puVar8 = puVar8 + 0xb;
          uVar7 = uVar7 + 1;
        } while ((param_1 & 7) != uVar7);
        param_1 = param_1 - uVar7;
      }
      if (6 < uVar13) {
        do {
          puVar8[6] = 0;
          puVar8[7] = 0;
          puVar8[8] = 0;
          puVar8[9] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[10] = 0;
          puVar8[7] = puVar8 + 9;
          puVar8[0x11] = 0;
          puVar8[0x12] = 0;
          puVar8[0xb] = 0;
          puVar8[0xc] = 0;
          puVar8[0xd] = 0;
          puVar8[0xe] = 0;
          puVar8[0xf] = 0;
          puVar8[0x10] = 0;
          puVar8[0x13] = 0;
          puVar8[0x14] = 0;
          puVar8[0x15] = 0;
          puVar8[0x12] = puVar8 + 0x14;
          puVar8[0x16] = 0;
          puVar8[0x17] = 0;
          puVar8[0x18] = 0;
          puVar8[0x19] = 0;
          puVar8[0x1a] = 0;
          puVar8[0x1b] = 0;
          puVar8[0x1c] = 0;
          puVar8[0x1d] = 0;
          puVar8[0x1e] = 0;
          puVar8[0x1f] = 0;
          puVar8[0x20] = 0;
          puVar8[0x1d] = puVar8 + 0x1f;
          puVar8[0x27] = 0;
          puVar8[0x28] = 0;
          puVar8[0x21] = 0;
          puVar8[0x22] = 0;
          puVar8[0x23] = 0;
          puVar8[0x24] = 0;
          puVar8[0x25] = 0;
          puVar8[0x26] = 0;
          puVar8[0x29] = 0;
          puVar8[0x2a] = 0;
          puVar8[0x2b] = 0;
          puVar8[0x28] = puVar8 + 0x2a;
          puVar8[0x32] = 0;
          puVar8[0x33] = 0;
          puVar8[0x2c] = 0;
          puVar8[0x2d] = 0;
          puVar8[0x2e] = 0;
          puVar8[0x2f] = 0;
          puVar8[0x30] = 0;
          puVar8[0x31] = 0;
          puVar8[0x34] = 0;
          puVar8[0x35] = 0;
          puVar8[0x36] = 0;
          puVar8[0x33] = puVar8 + 0x35;
          puVar8[0x37] = 0;
          puVar8[0x38] = 0;
          puVar8[0x39] = 0;
          puVar8[0x3a] = 0;
          puVar8[0x3b] = 0;
          puVar8[0x3c] = 0;
          puVar8[0x3d] = 0;
          puVar8[0x3e] = 0;
          puVar8[0x3f] = 0;
          puVar8[0x40] = 0;
          puVar8[0x41] = 0;
          puVar8[0x3e] = puVar8 + 0x40;
          puVar8[0x48] = 0;
          puVar8[0x49] = 0;
          puVar8[0x4a] = 0;
          puVar8[0x4b] = 0;
          puVar8[0x46] = 0;
          puVar8[0x47] = 0;
          puVar8[0x44] = 0;
          puVar8[0x45] = 0;
          puVar8[0x42] = 0;
          puVar8[0x43] = 0;
          puVar8[0x4c] = 0;
          puVar8[0x49] = puVar8 + 0x4b;
          puVar8[0x53] = 0;
          puVar8[0x54] = 0;
          puVar8[0x55] = 0;
          puVar8[0x56] = 0;
          puVar8[0x51] = 0;
          puVar8[0x52] = 0;
          puVar8[0x4f] = 0;
          puVar8[0x50] = 0;
          puVar8[0x4d] = 0;
          puVar8[0x4e] = 0;
          puVar8[0x57] = 0;
          puVar8[0x54] = puVar8 + 0x56;
          puVar8 = puVar8 + 0x58;
          param_1 = param_1 - 8;
        } while (param_1 != 0);
      }
      *(undefined8 **)(this + 8) = puVar8;
    }
  }
  return;
}


