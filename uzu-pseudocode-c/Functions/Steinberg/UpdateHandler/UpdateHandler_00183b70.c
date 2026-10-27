// Function : UpdateHandler
// Namespace: Steinberg:UpdateHandler
// Entry    : 00183b70
// Prototype: undefined UpdateHandler(UpdateHandler * this)
// Body     : 00183b70 - 00183d5f


/* Steinberg::UpdateHandler::UpdateHandler() */

void __thiscall Steinberg::UpdateHandler::UpdateHandler(UpdateHandler *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  pthread_mutexattr_t local_38 [2];
  
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR_queryInterface_00702ca0;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00702d58;
  *(undefined ***)(this + 0x18) = &PTR_queryInterface_00702da0;
  *(undefined ***)(this + 0x20) = &PTR__FLock_00702c68;
  pthread_mutexattr_init(local_38);
  pthread_mutexattr_settype(local_38,1);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x28),local_38);
  pthread_mutexattr_destroy(local_38);
  *(undefined8 *)(this + 0x50) = 0;
                    /* try { // try from 00183bec to 00183bf5 has its CatchHandler @ 00183d9d */
  pvVar1 = operator_new(0x30a0);
  lVar2 = 0;
  do {
    lVar3 = (long)pvVar1 + lVar2 + 8;
    *(undefined4 *)((long)pvVar1 + lVar2 + 8) = 0;
    *(undefined8 *)((long)pvVar1 + lVar2 + 0x10) = 0;
    *(long *)((long)pvVar1 + lVar2 + 0x18) = lVar3;
    *(long *)((long)pvVar1 + lVar2 + 0x20) = lVar3;
    *(undefined8 *)((long)pvVar1 + lVar2 + 0x28) = 0;
    lVar3 = (long)pvVar1 + lVar2 + 0x38;
    *(undefined4 *)((long)pvVar1 + lVar2 + 0x38) = 0;
    *(undefined8 *)((long)pvVar1 + lVar2 + 0x40) = 0;
    *(long *)((long)pvVar1 + lVar2 + 0x48) = lVar3;
    *(long *)((long)pvVar1 + lVar2 + 0x50) = lVar3;
    *(undefined8 *)((long)pvVar1 + lVar2 + 0x58) = 0;
    lVar3 = (long)pvVar1 + lVar2 + 0x68;
    *(undefined4 *)((long)pvVar1 + lVar2 + 0x68) = 0;
    *(undefined8 *)((long)pvVar1 + lVar2 + 0x70) = 0;
    *(long *)((long)pvVar1 + lVar2 + 0x78) = lVar3;
    *(long *)((long)pvVar1 + lVar2 + 0x80) = lVar3;
    *(undefined8 *)((long)pvVar1 + lVar2 + 0x88) = 0;
    lVar3 = (long)pvVar1 + lVar2 + 0x98;
    *(undefined4 *)((long)pvVar1 + lVar2 + 0x98) = 0;
    *(undefined8 *)((long)pvVar1 + lVar2 + 0xa0) = 0;
    *(long *)((long)pvVar1 + lVar2 + 0xa8) = lVar3;
    *(long *)((long)pvVar1 + lVar2 + 0xb0) = lVar3;
    *(undefined8 *)((long)pvVar1 + lVar2 + 0xb8) = 0;
    lVar2 = lVar2 + 0xc0;
  } while (lVar2 != 0x3000);
  *(undefined8 *)((long)pvVar1 + 0x3040) = 0;
  *(undefined8 *)((long)pvVar1 + 0x3048) = 0;
  *(undefined8 *)((long)pvVar1 + 0x3030) = 0;
  *(undefined8 *)((long)pvVar1 + 0x3038) = 0;
  *(undefined8 *)((long)pvVar1 + 0x3020) = 0;
  *(undefined8 *)((long)pvVar1 + 0x3028) = 0;
  *(undefined8 *)((long)pvVar1 + 0x3010) = 0;
  *(undefined8 *)((long)pvVar1 + 0x3018) = 0;
  *(undefined8 *)((long)pvVar1 + 0x3000) = 0;
  *(undefined8 *)((long)pvVar1 + 0x3008) = 0;
                    /* try { // try from 00183cfe to 00183d07 has its CatchHandler @ 00183d6f */
  std::
  _Deque_base<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>::
  _M_initialize_map((_Deque_base<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>
                     *)((long)pvVar1 + 0x3000),0);
  *(undefined8 *)((long)pvVar1 + 0x3090) = 0;
  *(undefined8 *)((long)pvVar1 + 0x3098) = 0;
  *(undefined8 *)((long)pvVar1 + 0x3080) = 0;
  *(undefined8 *)((long)pvVar1 + 0x3088) = 0;
  *(undefined8 *)((long)pvVar1 + 0x3070) = 0;
  *(undefined8 *)((long)pvVar1 + 0x3078) = 0;
  *(undefined8 *)((long)pvVar1 + 0x3060) = 0;
  *(undefined8 *)((long)pvVar1 + 0x3068) = 0;
  *(undefined8 *)((long)pvVar1 + 0x3050) = 0;
  *(undefined8 *)((long)pvVar1 + 0x3058) = 0;
                    /* try { // try from 00183d35 to 00183d3b has its CatchHandler @ 00183d60 */
  std::_Deque_base<Steinberg::Update::UpdateData,std::allocator<Steinberg::Update::UpdateData>>::
  _M_initialize_map((_Deque_base<Steinberg::Update::UpdateData,std::allocator<Steinberg::Update::UpdateData>>
                     *)((long)pvVar1 + 0x3050),0);
  *(void **)(this + 0x50) = pvVar1;
  if (FObject::gUpdateHandler == (UpdateHandler *)0x0) {
    FObject::gUpdateHandler = this + 0x10;
  }
  return;
}


