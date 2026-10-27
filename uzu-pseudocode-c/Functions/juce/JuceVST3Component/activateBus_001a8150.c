// Function : activateBus
// Namespace: juce:JuceVST3Component
// Entry    : 001a8150
// Prototype: undefined8 activateBus(JuceVST3Component * this, int param_1, undefined8 param_2, undefined8 param_3, uint * param_4, undefined8 param_5)
// Body     : 001a8150 - 001a89b7


/* juce::JuceVST3Component::activateBus(int, int, int, unsigned char) */

undefined8 __thiscall
juce::JuceVST3Component::activateBus
          (JuceVST3Component *this,int param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
          undefined8 param_5)

{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  void **ppvVar4;
  void *pvVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  void **ppvVar14;
  JuceVST3Component *pJVar15;
  undefined1 local_100 [8];
  void *local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  undefined8 uStack_e0;
  ulong local_d0;
  JuceVST3Component *local_c8;
  long local_c0;
  void **local_b8;
  undefined8 local_b0;
  int local_a4;
  void *local_a0;
  int local_94;
  void *local_90;
  int local_84;
  void *local_80;
  int local_74;
  uint local_64;
  uint local_60;
  uint local_5c;
  CriticalSection *local_58;
  char local_50;
  char *local_48;
  void **local_40;
  long local_38;
  
  FLStudioDIYSpecificationEnforcementLock::FLStudioDIYSpecificationEnforcementLock
            ((FLStudioDIYSpecificationEnforcementLock *)&local_58,(CriticalSection *)(this + 1000),
             param_2,param_3,param_4,param_5);
  uVar13 = 1;
  if (param_1 == 0) {
    lVar7 = *(long *)(this + 0x68);
    local_64 = *(uint *)(lVar7 + 0xdc);
    local_60 = *(uint *)(lVar7 + 0xcc);
    uVar12 = *(uint *)(lVar7 + 0xdc);
    if ((int)param_2 == 0) {
      uVar12 = *(uint *)(lVar7 + 0xcc);
    }
    uVar10 = (uint)param_3;
    if (uVar10 < uVar12) {
      local_c8 = this;
      if ((int)param_2 == 0) {
        lVar11 = *(long *)(this + 0x3b0);
        lVar8 = *(long *)(this + 0x3b8);
      }
      else {
        lVar11 = *(long *)(this + 0x3c8);
        lVar8 = *(long *)(this + 0x3d0);
      }
      if ((ulong)(long)(int)uVar10 < (ulong)((lVar8 - lVar11 >> 4) * -0x3333333333333333)) {
        *(bool *)(lVar11 + 0x48 + (long)(int)uVar10 * 0x50) = (char)param_4 != '\0';
      }
      local_e8 = (void *)0x0;
      uStack_e0 = 0;
      local_f8 = (void *)0x0;
      uStack_f0 = 0;
      local_48 = (char *)&local_b0;
      local_b0._0_2_ = 1;
      cVar9 = '\x01';
      while( true ) {
        uVar12 = local_60;
        if (cVar9 == '\0') {
          uVar12 = local_64;
        }
        local_d0 = (ulong)(cVar9 == '\0') << 4 | 0xc;
        if (0 < (int)uVar12) {
          local_40 = &local_f8;
          if (cVar9 == '\0') {
            local_40 = &local_e8;
          }
          local_38 = (ulong)(cVar9 == '\0') * 0x10;
          local_c0 = local_38 + 8;
          local_b8 = (void **)(ulong)uVar12;
          ppvVar14 = (void **)0x0;
          do {
            uVar3 = local_d0;
            if (cVar9 == '\0') {
              lVar7 = *(long *)(local_c8 + 0x3c8);
              if ((ppvVar14 <
                   (void **)((*(long *)(local_c8 + 0x3d0) - lVar7 >> 4) * -0x3333333333333333)) &&
                 (*(char *)(lVar7 + 0x48 + (long)ppvVar14 * 0x50) != '\0')) {
                BigInteger::BigInteger
                          ((BigInteger *)&local_90,(long *)(lVar7 + (long)ppvVar14 * 0x50));
              }
              else {
                AudioChannelSet::disabled((AudioChannelSet *)&local_90);
              }
            }
            else {
              lVar7 = *(long *)(local_c8 + 0x3b0);
              if ((ppvVar14 <
                   (void **)((*(long *)(local_c8 + 0x3b8) - lVar7 >> 4) * -0x3333333333333333)) &&
                 (*(char *)(lVar7 + 0x48 + (long)ppvVar14 * 0x50) != '\0')) {
                    /* try { // try from 001a8385 to 001a8409 has its CatchHandler @ 001a89de */
                BigInteger::BigInteger
                          ((BigInteger *)&local_90,(long *)(lVar7 + (long)ppvVar14 * 0x50));
              }
              else {
                AudioChannelSet::disabled((AudioChannelSet *)&local_90);
              }
            }
            iVar1 = *(int *)(local_100 + uVar3 + 8);
            if (*(int *)(&uStack_f0 + (ulong)(cVar9 == '\0') * 2) <= iVar1) {
              uVar12 = ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1) + iVar1 + 9U & 0xfffffff8;
              if (*(uint *)(local_100 + local_c0 + 8) != uVar12) {
                if ((int)uVar12 < 1) {
                  free(*local_40);
                  *(undefined8 *)(local_100 + local_38 + 8) = 0;
                }
                else {
                  local_5c = uVar12;
                  pvVar5 = malloc((ulong)uVar12 * 0x28);
                  lVar7 = local_38;
                  uVar3 = local_d0;
                  if (0 < iVar1) {
                    lVar8 = 0;
                    lVar11 = 0;
                    do {
                      BigInteger::BigInteger
                                ((BigInteger *)((long)pvVar5 + lVar8),
                                 (undefined8 *)(*(long *)(local_100 + lVar7 + 8) + lVar8));
                      BigInteger::~BigInteger
                                ((BigInteger *)(*(long *)(local_100 + lVar7 + 8) + lVar8));
                      lVar11 = lVar11 + 1;
                      lVar8 = lVar8 + 0x28;
                    } while (lVar11 < *(int *)(local_100 + uVar3 + 8));
                  }
                  pvVar2 = *local_40;
                  *local_40 = pvVar5;
                  free(pvVar2);
                  uVar12 = local_5c;
                }
              }
              *(uint *)(local_100 + local_c0 + 8) = uVar12;
              iVar1 = *(int *)(local_100 + local_d0 + 8);
            }
            *(int *)((long)&local_f8 + local_d0) = iVar1 + 1;
            ppvVar4 = &local_f8;
            if (cVar9 == '\0') {
              ppvVar4 = &local_e8;
            }
            BigInteger::BigInteger
                      ((BigInteger *)((long)iVar1 * 0x28 + (long)*ppvVar4),(undefined8 *)&local_90);
            BigInteger::~BigInteger((BigInteger *)&local_90);
            ppvVar14 = (void **)((long)ppvVar14 + 1);
          } while (ppvVar14 != local_b8);
          lVar7 = *(long *)(local_c8 + 0x68);
        }
        if (*(int *)(local_100 + local_d0 + 8) <
            *(int *)((ulong)(cVar9 == '\0') * 0x10 + 0xcc + lVar7)) {
          local_b8 = &local_f8;
          if (cVar9 == '\0') {
            local_b8 = &local_e8;
          }
          lVar11 = (ulong)(cVar9 == '\0') * 0x10;
          local_c0 = lVar11 + 8;
          do {
                    /* try { // try from 001a85f7 to 001a85fe has its CatchHandler @ 001a89dc */
            AudioChannelSet::disabled((AudioChannelSet *)&local_90);
            pJVar15 = local_c8;
            iVar1 = *(int *)(local_100 + local_d0 + 8);
            if (*(int *)(&uStack_f0 + (ulong)(cVar9 == '\0') * 2) <= iVar1) {
              uVar12 = ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1) + iVar1 + 9U & 0xfffffff8;
              if (*(uint *)(local_100 + local_c0 + 8) != uVar12) {
                if ((int)uVar12 < 1) {
                  free(*local_b8);
                  *(undefined8 *)(local_100 + lVar11 + 8) = 0;
                }
                else {
                  pvVar5 = malloc((ulong)uVar12 * 0x28);
                  uVar3 = local_d0;
                  if (0 < iVar1) {
                    lVar8 = 0;
                    lVar7 = 0;
                    do {
                      BigInteger::BigInteger
                                ((BigInteger *)((long)pvVar5 + lVar8),
                                 (undefined8 *)(*(long *)(local_100 + lVar11 + 8) + lVar8));
                      BigInteger::~BigInteger
                                ((BigInteger *)(*(long *)(local_100 + lVar11 + 8) + lVar8));
                      lVar7 = lVar7 + 1;
                      lVar8 = lVar8 + 0x28;
                    } while (lVar7 < *(int *)(local_100 + uVar3 + 8));
                  }
                  pvVar2 = *local_b8;
                  *local_b8 = pvVar5;
                  free(pvVar2);
                  pJVar15 = local_c8;
                }
              }
              *(uint *)(local_100 + local_c0 + 8) = uVar12;
              iVar1 = *(int *)(local_100 + local_d0 + 8);
            }
            uVar3 = local_d0;
            *(int *)(local_100 + local_d0 + 8) = iVar1 + 1;
            ppvVar14 = &local_f8;
            if (cVar9 == '\0') {
              ppvVar14 = &local_e8;
            }
            BigInteger::BigInteger
                      ((BigInteger *)((long)iVar1 * 0x28 + (long)*ppvVar14),(undefined8 *)&local_90)
            ;
            BigInteger::~BigInteger((BigInteger *)&local_90);
            lVar7 = *(long *)(pJVar15 + 0x68);
            lVar8 = lVar7 + 0xc0;
            if (cVar9 == '\0') {
              lVar8 = lVar7 + 0xd0;
            }
          } while (*(int *)(local_100 + uVar3 + 8) < *(int *)(lVar8 + 0xc));
        }
        pcVar6 = local_48 + 1;
        if (pcVar6 == (char *)((long)&local_b0 + 2)) break;
        local_48 = pcVar6;
        cVar9 = *pcVar6;
      }
                    /* try { // try from 001a8720 to 001a8729 has its CatchHandler @ 001a89da */
      AudioProcessor::getBusesLayout
                ((ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *)&local_90,lVar7);
      pJVar15 = local_c8;
                    /* try { // try from 001a873d to 001a8746 has its CatchHandler @ 001a89cb */
      uVar13 = AudioProcessor::checkBusesLayoutSupported
                         (*(AudioProcessor **)(local_c8 + 0x68),(long)&local_f8);
      if ((char)uVar13 == '\0') {
        AudioProcessor::enableAllBuses(*(AudioProcessor **)(pJVar15 + 0x68));
      }
      else {
                    /* try { // try from 001a874f to 001a875f has its CatchHandler @ 001a89c9 */
        AudioProcessor::setBusesLayout(*(AudioProcessor **)(pJVar15 + 0x68),&local_f8);
      }
                    /* try { // try from 001a8764 to 001a876d has its CatchHandler @ 001a89c7 */
      AudioProcessor::getBusesLayout
                ((ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *)&local_b0,
                 *(long *)(pJVar15 + 0x68));
      if (((*(long *)(pJVar15 + 0x3b8) - *(long *)(pJVar15 + 0x3b0) >> 4) * -0x3333333333333333 ==
           (long)local_a4) &&
         ((*(long *)(pJVar15 + 0x3d0) - *(long *)(pJVar15 + 0x3c8) >> 4) * -0x3333333333333333 ==
          (long)local_94)) {
                    /* try { // try from 001a87b5 to 001a87dc has its CatchHandler @ 001a89b8 */
        ClientBufferMapper::updateActiveClientBuses(juce::AudioProcessor::BusesLayout_const&)::
        {lambda(auto:1&,auto:2&)#1}::operator()(local_100,(long *)(pJVar15 + 0x3b0),&local_b0);
        ClientBufferMapper::updateActiveClientBuses(juce::AudioProcessor::BusesLayout_const&)::
        {lambda(auto:1&,auto:2&)#1}::operator()
                  (local_100,(long *)(pJVar15 + 0x3c8),(long *)&local_a0);
      }
      if (0 < local_94) {
        lVar7 = 0;
        lVar11 = 0;
        do {
          BigInteger::~BigInteger((BigInteger *)((long)local_a0 + lVar7));
          lVar11 = lVar11 + 1;
          lVar7 = lVar7 + 0x28;
        } while (lVar11 < local_94);
      }
      local_94 = 0;
      free(local_a0);
      if (0 < local_a4) {
        lVar7 = 0;
        lVar11 = 0;
        do {
          BigInteger::~BigInteger
                    ((BigInteger *)(CONCAT62(local_b0._2_6_,(undefined2)local_b0) + lVar7));
          lVar11 = lVar11 + 1;
          lVar7 = lVar7 + 0x28;
        } while (lVar11 < local_a4);
      }
      local_a4 = 0;
      free((void *)CONCAT62(local_b0._2_6_,(undefined2)local_b0));
      if (0 < local_74) {
        lVar7 = 0;
        lVar11 = 0;
        do {
          BigInteger::~BigInteger((BigInteger *)((long)local_80 + lVar7));
          lVar11 = lVar11 + 1;
          lVar7 = lVar7 + 0x28;
        } while (lVar11 < local_74);
      }
      local_74 = 0;
      free(local_80);
      if (0 < local_84) {
        lVar7 = 0;
        lVar11 = 0;
        do {
          BigInteger::~BigInteger((BigInteger *)((long)local_90 + lVar7));
          lVar11 = lVar11 + 1;
          lVar7 = lVar7 + 0x28;
        } while (lVar11 < local_84);
      }
      local_84 = 0;
      free(local_90);
      if (0 < uStack_e0._4_4_) {
        lVar7 = 0;
        lVar11 = 0;
        do {
          BigInteger::~BigInteger((BigInteger *)((long)local_e8 + lVar7));
          lVar11 = lVar11 + 1;
          lVar7 = lVar7 + 0x28;
        } while (lVar11 < uStack_e0._4_4_);
      }
      uStack_e0 = uStack_e0 & 0xffffffff;
      free(local_e8);
      if (0 < uStack_f0._4_4_) {
        lVar7 = 0;
        lVar11 = 0;
        do {
          BigInteger::~BigInteger((BigInteger *)((long)local_f8 + lVar7));
          lVar11 = lVar11 + 1;
          lVar7 = lVar7 + 0x28;
        } while (lVar11 < uStack_f0._4_4_);
      }
      uStack_f0 = uStack_f0 & 0xffffffff;
      free(local_f8);
      uVar13 = 0;
    }
  }
  if (local_50 != '\0') {
    local_50 = 0;
    CriticalSection::exit(local_58);
  }
  return uVar13;
}


