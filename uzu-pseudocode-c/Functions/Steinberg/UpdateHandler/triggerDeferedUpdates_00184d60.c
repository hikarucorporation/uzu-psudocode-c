// Function : triggerDeferedUpdates
// Namespace: Steinberg:UpdateHandler
// Entry    : 00184d60
// Prototype: undefined8 triggerDeferedUpdates(UpdateHandler * this, undefined8 * param_1)
// Body     : 00184d60 - 0018522f


/* Steinberg::UpdateHandler::triggerDeferedUpdates(Steinberg::FUnknown*) */

undefined8 __thiscall
Steinberg::UpdateHandler::triggerDeferedUpdates(UpdateHandler *this,undefined8 *param_1)

{
  pthread_mutex_t *ppVar1;
  UpdateHandler *pUVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long *local_f8;
  long lStack_f0;
  long local_e8;
  long *plStack_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  ulong uStack_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  long local_98;
  ulong uStack_90;
  long *local_88;
  undefined4 local_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_50 [3];
  long *local_38;
  
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  local_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  local_d8 = (void *)0x0;
  uStack_d0 = 0;
  std::
  _Deque_base<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>::
  _M_initialize_map((_Deque_base<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>
                     *)&local_d8,0);
  if (param_1 == (undefined8 *)0x0) {
    if (*(long *)(*(long *)(this + 0x50) + 0x3030) != *(long *)(*(long *)(this + 0x50) + 0x3010)) {
      ppVar1 = (pthread_mutex_t *)(this + 0x28);
      do {
        pthread_mutex_lock(ppVar1);
        lVar8 = *(long *)(this + 0x50);
        puVar7 = *(undefined8 **)(lVar8 + 0x3010);
        plVar4 = (long *)*puVar7;
        uVar3 = *(undefined4 *)(puVar7 + 1);
        if (puVar7 == (undefined8 *)(*(long *)(lVar8 + 0x3020) + -0x10)) {
          operator_delete(*(void **)(lVar8 + 0x3018));
          lVar11 = *(long *)(lVar8 + 0x3028);
          *(long *)(lVar8 + 0x3028) = lVar11 + 8;
          puVar7 = *(undefined8 **)(lVar11 + 8);
          *(undefined8 **)(lVar8 + 0x3018) = puVar7;
          *(undefined8 **)(lVar8 + 0x3020) = puVar7 + 0x40;
          lVar11 = *(long *)(this + 0x50);
        }
        else {
          puVar7 = puVar7 + 2;
          lVar11 = lVar8;
        }
        *(undefined8 **)(lVar8 + 0x3010) = puVar7;
        puVar7 = *(undefined8 **)(lVar11 + 0x3060);
        if (puVar7 != *(undefined8 **)(lVar11 + 0x3080)) {
          puVar10 = *(undefined8 **)(lVar11 + 0x3070);
          lVar8 = *(long *)(lVar11 + 0x3078);
          do {
            if ((long *)*puVar7 == plVar4) {
              pthread_mutex_unlock(ppVar1);
              lStack_f0 = CONCAT44(lStack_f0._4_4_,uVar3);
              local_f8 = plVar4;
              if (local_a8 == (undefined8 *)(local_98 + -0x10)) {
                    /* try { // try from 00185107 to 00185113 has its CatchHandler @ 00185242 */
                std::
                deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>
                ::_M_push_back_aux<Steinberg::Update::DeferedChange_const&>
                          ((deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>
                            *)&local_d8,&local_f8);
              }
              else {
                *local_a8 = plVar4;
                *(undefined4 *)(local_a8 + 1) = uVar3;
                local_a8 = local_a8 + 2;
              }
              goto LAB_00184fd9;
            }
            puVar7 = puVar7 + 3;
            if (puVar7 == puVar10) {
              puVar7 = *(undefined8 **)(lVar8 + 8);
              lVar8 = lVar8 + 8;
              puVar10 = puVar7 + 0x3f;
            }
          } while (puVar7 != *(undefined8 **)(lVar11 + 0x3080));
        }
        pthread_mutex_unlock(ppVar1);
                    /* try { // try from 00184fcb to 00184fd8 has its CatchHandler @ 0018525e */
        (**(code **)(*(long *)this + 0x88))(this,plVar4,uVar3);
LAB_00184fd9:
      } while (*(long *)(*(long *)(this + 0x50) + 0x3030) !=
               *(long *)(*(long *)(this + 0x50) + 0x3010));
    }
    if (local_a8 != local_c8) {
      pUVar2 = this + 0x20;
                    /* try { // try from 00185131 to 00185136 has its CatchHandler @ 00185238 */
      (**(code **)(*(long *)(this + 0x20) + 0x10))(pUVar2);
      if (local_c8 != local_a8) {
        puVar7 = local_b8;
        puVar10 = local_c8;
        uVar12 = uStack_b0;
        do {
          lVar8 = *(long *)(this + 0x50);
          puVar5 = *(undefined8 **)(lVar8 + 0x3030);
          if (puVar5 == (undefined8 *)(*(long *)(lVar8 + 0x3040) + -0x10)) {
                    /* try { // try from 001851a7 to 001851ae has its CatchHandler @ 00185248 */
            std::
            deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>
            ::_M_push_back_aux<Steinberg::Update::DeferedChange_const&>
                      ((deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>
                        *)(lVar8 + 0x3000),puVar10);
          }
          else {
            *puVar5 = *puVar10;
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar10 + 1);
            *(undefined8 **)(lVar8 + 0x3030) = puVar5 + 2;
          }
          puVar10 = puVar10 + 2;
          if (puVar10 == puVar7) {
            puVar10 = *(undefined8 **)(uVar12 + 8);
            uVar12 = uVar12 + 8;
            puVar7 = puVar10 + 0x40;
          }
        } while (puVar10 != local_a8);
      }
                    /* try { // try from 001851cd to 001851d2 has its CatchHandler @ 00185230 */
      (**(code **)(*(long *)pUVar2 + 0x18))(pUVar2);
    }
  }
  else {
    local_f8 = (long *)0x0;
                    /* try { // try from 00184db3 to 00184dd7 has its CatchHandler @ 00185244 */
    iVar6 = (**(code **)*param_1)(param_1,0x71aae8,&local_f8);
    if (iVar6 != 0) {
      (**(code **)*param_1)(param_1,0x71ab08,&local_f8);
    }
    plVar4 = local_f8;
    local_88 = local_f8;
    local_80 = 0;
    ppVar1 = (pthread_mutex_t *)(this + 0x28);
    local_f8 = plVar4;
LAB_00184e1a:
    pthread_mutex_lock(ppVar1);
    lVar8 = *(long *)(this + 0x50);
    local_f8 = *(long **)(lVar8 + 0x3010);
    lStack_f0 = *(long *)(lVar8 + 0x3018);
    local_e8 = *(long *)(lVar8 + 0x3020);
    plStack_e0 = *(long **)(lVar8 + 0x3028);
    local_78 = *(long *)(lVar8 + 0x3030);
    uStack_70 = *(undefined8 *)(lVar8 + 0x3038);
    local_68 = *(undefined8 *)(lVar8 + 0x3040);
    uStack_60 = *(undefined8 *)(lVar8 + 0x3048);
                    /* try { // try from 00184e5b to 00184e72 has its CatchHandler @ 00185267 */
    std::
    __find_if<std::_Deque_iterator<Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*>,__gnu_cxx::__ops::_Iter_equals_val<Steinberg::Update::DeferedChange_const>>
              ((long *)local_50,(long *)&local_f8,&local_78,(long *)&local_88);
    if (local_50[0] != *(long **)(*(long *)(this + 0x50) + 0x3030)) {
      if (*local_50[0] != 0) {
        uVar3 = (undefined4)local_50[0][1];
        local_f8 = local_50[0];
        lStack_f0 = *local_38;
        local_e8 = lStack_f0 + 0x200;
        plStack_e0 = local_38;
                    /* try { // try from 00184ec1 to 00184ecb has its CatchHandler @ 00185265 */
        std::
        deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>::
        _M_erase(&local_78,*(long *)(this + 0x50) + 0x3000,(long *)&local_f8);
        lVar8 = *(long *)(this + 0x50);
        puVar7 = *(undefined8 **)(lVar8 + 0x3060);
        if (puVar7 != *(undefined8 **)(lVar8 + 0x3080)) {
          puVar10 = *(undefined8 **)(lVar8 + 0x3070);
          lVar11 = *(long *)(lVar8 + 0x3078);
          do {
            if ((long *)*puVar7 == plVar4) {
              pthread_mutex_unlock(ppVar1);
              lStack_f0 = CONCAT44(lStack_f0._4_4_,uVar3);
              if (local_a8 == (undefined8 *)(local_98 + -0x10)) {
                    /* try { // try from 00184f61 to 00184f6d has its CatchHandler @ 00185246 */
                local_f8 = plVar4;
                std::
                deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>
                ::_M_push_back_aux<Steinberg::Update::DeferedChange_const&>
                          ((deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>
                            *)&local_d8,&local_f8);
              }
              else {
                *local_a8 = plVar4;
                *(undefined4 *)(local_a8 + 1) = uVar3;
                local_a8 = local_a8 + 2;
                local_f8 = plVar4;
              }
              goto LAB_00184e1a;
            }
            puVar7 = puVar7 + 3;
            if (puVar7 == puVar10) {
              puVar7 = *(undefined8 **)(lVar11 + 8);
              lVar11 = lVar11 + 8;
              puVar10 = puVar7 + 0x3f;
            }
          } while (puVar7 != *(undefined8 **)(lVar8 + 0x3080));
        }
        pthread_mutex_unlock(ppVar1);
                    /* try { // try from 00184e0b to 00184e19 has its CatchHandler @ 00185263 */
        (**(code **)(*(long *)this + 0x88))(this,plVar4,uVar3);
      }
      goto LAB_00184e1a;
    }
    pthread_mutex_unlock(ppVar1);
    if (plVar4 != (long *)0x0) {
                    /* try { // try from 00184f87 to 00184f8c has its CatchHandler @ 0018523a */
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  uVar12 = uStack_90;
  if (local_d8 != (void *)0x0) {
    if (uStack_b0 < uStack_90 + 8) {
      uVar9 = uStack_b0 - 8;
      do {
        puVar7 = (undefined8 *)(uVar9 + 8);
        uVar9 = uVar9 + 8;
        operator_delete((void *)*puVar7);
      } while (uVar9 < uVar12);
    }
    operator_delete(local_d8);
  }
  return 0;
}


