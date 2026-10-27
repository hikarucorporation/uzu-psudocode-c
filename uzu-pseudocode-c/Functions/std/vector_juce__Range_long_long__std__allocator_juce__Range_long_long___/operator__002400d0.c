// Function : operator=
// Namespace: std:vector_juce__Range_long_long__std__allocator_juce__Range_long_long___
// Entry    : 002400d0
// Prototype: vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>> * operator=(vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>> * this, vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>> * param_1)
// Body     : 002400d0 - 00240238


/* std::vector<juce::Range<long long>, std::allocator<juce::Range<long long> >
   >::TEMPNAMEPLACEHOLDERVALUE(std::vector<juce::Range<long long>, std::allocator<juce::Range<long
   long> > > const&) */

vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>> * __thiscall
std::vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>>::operator=
          (vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>> *this,
          vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>> *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  void *__dest;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  if (param_1 != this) {
    puVar10 = *(undefined8 **)param_1;
    puVar8 = *(undefined8 **)(param_1 + 8);
    uVar7 = (long)puVar8 - (long)puVar10;
    uVar11 = (long)uVar7 >> 4;
    lVar1 = *(long *)this;
    if ((ulong)(*(long *)(this + 0x10) - lVar1 >> 4) < uVar11) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar11;
      if (SUB168(auVar2 * ZEXT816(0x10),8) != 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_bad_array_new_length();
      }
      __dest = operator_new(SUB168(auVar2 * ZEXT816(0x10),0));
      if (puVar10 != puVar8) {
        memcpy(__dest,puVar10,uVar7 & 0xfffffffffffffff0);
      }
      if (*(void **)this != (void *)0x0) {
        operator_delete(*(void **)this);
      }
      *(void **)this = __dest;
      *(void **)(this + 0x10) = (void *)((long)__dest + uVar11 * 0x10);
    }
    else {
      puVar5 = *(undefined8 **)(this + 8);
      uVar9 = (long)puVar5 - lVar1;
      uVar6 = (long)uVar9 >> 4;
      if (uVar6 < uVar11) {
        if (0 < (long)uVar9) {
          uVar7 = (uVar9 >> 4) + 1;
          lVar4 = 0;
          do {
            uVar3 = ((undefined8 *)((long)puVar10 + lVar4))[1];
            *(undefined8 *)(lVar1 + lVar4) = *(undefined8 *)((long)puVar10 + lVar4);
            ((undefined8 *)(lVar1 + lVar4))[1] = uVar3;
            uVar7 = uVar7 - 1;
            lVar4 = lVar4 + 0x10;
          } while (1 < uVar7);
          puVar10 = *(undefined8 **)param_1;
          puVar8 = *(undefined8 **)(param_1 + 8);
          puVar5 = *(undefined8 **)(this + 8);
          uVar6 = (long)puVar5 - *(long *)this >> 4;
        }
        for (puVar10 = puVar10 + uVar6 * 2; puVar10 != puVar8; puVar10 = puVar10 + 2) {
          uVar3 = puVar10[1];
          *puVar5 = *puVar10;
          puVar5[1] = uVar3;
          puVar5 = puVar5 + 2;
        }
      }
      else if (0 < (long)uVar7) {
        uVar7 = (uVar7 >> 4) + 1;
        lVar4 = 0;
        do {
          uVar3 = ((undefined8 *)((long)puVar10 + lVar4))[1];
          *(undefined8 *)(lVar1 + lVar4) = *(undefined8 *)((long)puVar10 + lVar4);
          ((undefined8 *)(lVar1 + lVar4))[1] = uVar3;
          uVar7 = uVar7 - 1;
          lVar4 = lVar4 + 0x10;
        } while (1 < uVar7);
      }
    }
    *(ulong *)(this + 8) = uVar11 * 0x10 + *(long *)this;
  }
  return this;
}


