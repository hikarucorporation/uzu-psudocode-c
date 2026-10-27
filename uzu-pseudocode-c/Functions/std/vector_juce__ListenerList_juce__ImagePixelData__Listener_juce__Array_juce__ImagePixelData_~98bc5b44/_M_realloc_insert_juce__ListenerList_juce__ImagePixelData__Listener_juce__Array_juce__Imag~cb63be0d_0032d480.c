// Function : _M_realloc_insert<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*>
// Namespace: std:vector_juce__ListenerList_juce__ImagePixelData__Listener_juce__Array_juce__ImagePixelData_~98bc5b44
// Entry    : 0032d480
// Prototype: void _M_realloc_insert<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*>(vector<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*>> * this, undefined8 * param_1, undefined8 * param_2)
// Body     : 0032d480 - 0032d7e4


/* void std::vector<juce::ListenerList<juce::ImagePixelData::Listener,
   juce::Array<juce::ImagePixelData::Listener*, juce::DummyCriticalSection, 0> >::Iterator*,
   std::allocator<juce::ListenerList<juce::ImagePixelData::Listener,
   juce::Array<juce::ImagePixelData::Listener*, juce::DummyCriticalSection, 0> >::Iterator*>
   >::_M_realloc_insert<juce::ListenerList<juce::ImagePixelData::Listener,
   juce::Array<juce::ImagePixelData::Listener*, juce::DummyCriticalSection, 0>
   >::Iterator*>(__gnu_cxx::__normal_iterator<juce::ListenerList<juce::ImagePixelData::Listener,
   juce::Array<juce::ImagePixelData::Listener*, juce::DummyCriticalSection, 0> >::Iterator**,
   std::vector<juce::ListenerList<juce::ImagePixelData::Listener,
   juce::Array<juce::ImagePixelData::Listener*, juce::DummyCriticalSection, 0> >::Iterator*,
   std::allocator<juce::ListenerList<juce::ImagePixelData::Listener,
   juce::Array<juce::ImagePixelData::Listener*, juce::DummyCriticalSection, 0> >::Iterator*> > >,
   juce::ListenerList<juce::ImagePixelData::Listener, juce::Array<juce::ImagePixelData::Listener*,
   juce::DummyCriticalSection, 0> >::Iterator*&&) */

void __thiscall
std::
vector<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
::
_M_realloc_insert<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*>
          (vector<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ImagePixelData::Listener,juce::Array<juce::ImagePixelData::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
           *this,undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  
  puVar3 = *(undefined8 **)this;
  puVar4 = *(undefined8 **)(this + 8);
  lVar8 = (long)puVar4 - (long)puVar3;
  if (lVar8 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar11 = lVar8 >> 3;
  uVar12 = 1;
  if (lVar8 != 0) {
    uVar12 = uVar11;
  }
  uVar15 = uVar12 + uVar11;
  if (uVar15 >> 0x3c != 0) {
    uVar15 = 0xfffffffffffffff;
  }
  if (CARRY8(uVar12,uVar11)) {
    uVar15 = 0xfffffffffffffff;
  }
  lVar16 = (long)param_1 - (long)puVar3;
  lVar8 = lVar16 >> 3;
  if (uVar15 == 0) {
    puVar9 = (undefined8 *)0x0;
    *(undefined8 *)(lVar8 * 8) = *param_2;
    if (lVar16 < 1) goto LAB_0032d585;
LAB_0032d526:
    puVar10 = puVar9;
    if (puVar3 != param_1) {
      puVar14 = puVar3;
      if (0x17 < lVar16 - 8U) {
        uVar17 = (lVar16 - 8U >> 3) + 1;
        uVar11 = uVar17 & 0xfffffffffffffffc;
        uVar13 = (uVar11 - 4 >> 2) + 1;
        uVar12 = (ulong)((uint)uVar13 & 3);
        if (uVar11 - 4 < 0xc) {
          lVar8 = 0;
        }
        else {
          uVar13 = uVar13 & 0x7ffffffffffffffc;
          lVar8 = 0;
          do {
            uVar5 = (puVar3 + lVar8)[1];
            uVar6 = puVar3[lVar8 + 2];
            uVar7 = (puVar3 + lVar8 + 2)[1];
            puVar9[lVar8] = puVar3[lVar8];
            (puVar9 + lVar8)[1] = uVar5;
            puVar9[lVar8 + 2] = uVar6;
            (puVar9 + lVar8 + 2)[1] = uVar7;
            uVar5 = (puVar3 + lVar8 + 4)[1];
            uVar6 = puVar3[lVar8 + 6];
            uVar7 = (puVar3 + lVar8 + 6)[1];
            puVar9[lVar8 + 4] = puVar3[lVar8 + 4];
            (puVar9 + lVar8 + 4)[1] = uVar5;
            puVar9[lVar8 + 6] = uVar6;
            (puVar9 + lVar8 + 6)[1] = uVar7;
            uVar5 = (puVar3 + lVar8 + 8)[1];
            uVar6 = puVar3[lVar8 + 10];
            uVar7 = (puVar3 + lVar8 + 10)[1];
            puVar9[lVar8 + 8] = puVar3[lVar8 + 8];
            (puVar9 + lVar8 + 8)[1] = uVar5;
            puVar9[lVar8 + 10] = uVar6;
            (puVar9 + lVar8 + 10)[1] = uVar7;
            uVar5 = (puVar3 + lVar8 + 0xc)[1];
            uVar6 = puVar3[lVar8 + 0xe];
            uVar7 = (puVar3 + lVar8 + 0xe)[1];
            puVar9[lVar8 + 0xc] = puVar3[lVar8 + 0xc];
            (puVar9 + lVar8 + 0xc)[1] = uVar5;
            puVar9[lVar8 + 0xe] = uVar6;
            (puVar9 + lVar8 + 0xe)[1] = uVar7;
            lVar8 = lVar8 + 0x10;
            uVar13 = uVar13 - 4;
          } while (uVar13 != 0);
        }
        if (uVar12 != 0) {
          lVar16 = 0;
          do {
            puVar14 = (undefined8 *)((long)puVar3 + lVar16 + lVar8 * 8);
            uVar5 = puVar14[1];
            puVar10 = (undefined8 *)((long)puVar3 + lVar16 + lVar8 * 8 + 0x10);
            uVar6 = *puVar10;
            uVar7 = puVar10[1];
            puVar10 = (undefined8 *)((long)puVar9 + lVar16 + lVar8 * 8);
            *puVar10 = *puVar14;
            puVar10[1] = uVar5;
            puVar10 = (undefined8 *)((long)puVar9 + lVar16 + lVar8 * 8 + 0x10);
            *puVar10 = uVar6;
            puVar10[1] = uVar7;
            lVar16 = lVar16 + 0x20;
          } while (uVar12 * 0x20 != lVar16);
        }
        puVar10 = puVar9 + uVar11;
        if (uVar17 == uVar11) goto LAB_0032d673;
        puVar14 = puVar3 + uVar11;
      }
      do {
        *puVar10 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar10 = puVar10 + 1;
      } while (puVar14 != param_1);
    }
  }
  else {
    puVar9 = operator_new(uVar15 * 8);
    puVar9[lVar8] = *param_2;
    if (0 < lVar16) goto LAB_0032d526;
LAB_0032d585:
    puVar10 = puVar9 + lVar8;
  }
LAB_0032d673:
  puVar14 = puVar10 + 1;
  if ((long)puVar4 - (long)param_1 < 1) {
    puVar14 = (undefined8 *)((long)puVar14 + ((long)puVar4 - (long)param_1));
  }
  else if ((long)puVar4 - (long)param_1 != 0) {
    uVar12 = ((long)puVar4 - (long)param_1) - 8;
    if (0x17 < uVar12) {
      uVar12 = (uVar12 >> 3) + 1;
      uVar17 = uVar12 & 0xfffffffffffffffc;
      uVar13 = (uVar17 - 4 >> 2) + 1;
      uVar11 = (ulong)((uint)uVar13 & 3);
      if (uVar17 - 4 < 0xc) {
        lVar8 = 0;
      }
      else {
        uVar13 = uVar13 & 0x7ffffffffffffffc;
        lVar8 = 0;
        do {
          uVar5 = (param_1 + lVar8)[1];
          uVar6 = param_1[lVar8 + 2];
          uVar7 = (param_1 + lVar8 + 2)[1];
          puVar10[lVar8 + 1] = param_1[lVar8];
          (puVar10 + lVar8 + 1)[1] = uVar5;
          puVar10[lVar8 + 3] = uVar6;
          (puVar10 + lVar8 + 3)[1] = uVar7;
          uVar5 = (param_1 + lVar8 + 4)[1];
          uVar6 = param_1[lVar8 + 6];
          uVar7 = (param_1 + lVar8 + 6)[1];
          puVar10[lVar8 + 5] = param_1[lVar8 + 4];
          (puVar10 + lVar8 + 5)[1] = uVar5;
          puVar10[lVar8 + 7] = uVar6;
          (puVar10 + lVar8 + 7)[1] = uVar7;
          uVar5 = (param_1 + lVar8 + 8)[1];
          uVar6 = param_1[lVar8 + 10];
          uVar7 = (param_1 + lVar8 + 10)[1];
          puVar10[lVar8 + 9] = param_1[lVar8 + 8];
          (puVar10 + lVar8 + 9)[1] = uVar5;
          puVar10[lVar8 + 0xb] = uVar6;
          (puVar10 + lVar8 + 0xb)[1] = uVar7;
          uVar5 = (param_1 + lVar8 + 0xc)[1];
          uVar6 = param_1[lVar8 + 0xe];
          uVar7 = (param_1 + lVar8 + 0xe)[1];
          puVar10[lVar8 + 0xd] = param_1[lVar8 + 0xc];
          (puVar10 + lVar8 + 0xd)[1] = uVar5;
          puVar10[lVar8 + 0xf] = uVar6;
          (puVar10 + lVar8 + 0xf)[1] = uVar7;
          lVar8 = lVar8 + 0x10;
          uVar13 = uVar13 - 4;
        } while (uVar13 != 0);
      }
      if (uVar11 != 0) {
        lVar16 = 0;
        do {
          puVar2 = (undefined8 *)((long)param_1 + lVar16 + lVar8 * 8);
          uVar5 = puVar2[1];
          puVar1 = (undefined8 *)((long)param_1 + lVar16 + lVar8 * 8 + 0x10);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = (undefined8 *)((long)puVar10 + lVar16 + lVar8 * 8 + 8);
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)((long)puVar10 + lVar16 + lVar8 * 8 + 0x18);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          lVar16 = lVar16 + 0x20;
        } while (uVar11 * 0x20 != lVar16);
      }
      puVar14 = puVar14 + uVar17;
      if (uVar12 == uVar17) goto LAB_0032d7a4;
      param_1 = param_1 + uVar17;
    }
    do {
      *puVar14 = *param_1;
      param_1 = param_1 + 1;
      puVar14 = puVar14 + 1;
    } while (param_1 != puVar4);
  }
LAB_0032d7a4:
  if (puVar3 != (undefined8 *)0x0) {
    operator_delete(puVar3);
  }
  *(undefined8 **)this = puVar9;
  *(undefined8 **)(this + 8) = puVar14;
  *(undefined8 **)(this + 0x10) = puVar9 + uVar15;
  return;
}


