// Function : ~UpdateHandler
// Namespace: Steinberg:UpdateHandler
// Entry    : 00183dc0
// Prototype: undefined ~UpdateHandler(UpdateHandler * this)
// Body     : 00183dc0 - 00183f17


/* Steinberg::UpdateHandler::~UpdateHandler() */

void __thiscall Steinberg::UpdateHandler::~UpdateHandler(UpdateHandler *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  _Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>>
  *this_00;
  void *pvVar5;
  long lVar6;
  
  *(undefined ***)this = &PTR_queryInterface_00702ca0;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00702d58;
  *(undefined ***)(this + 0x18) = &PTR_queryInterface_00702da0;
  if (FObject::gUpdateHandler == this + 0x10) {
    FObject::gUpdateHandler = (UpdateHandler *)0x0;
    pvVar2 = *(void **)(this + 0x50);
  }
  else {
    pvVar2 = *(void **)(this + 0x50);
  }
  if (pvVar2 != (void *)0x0) {
    pvVar5 = *(void **)((long)pvVar2 + 0x3050);
    if (pvVar5 != (void *)0x0) {
      uVar3 = *(ulong *)((long)pvVar2 + 0x3098);
      if (*(ulong *)((long)pvVar2 + 0x3078) < uVar3 + 8) {
        uVar4 = *(ulong *)((long)pvVar2 + 0x3078) - 8;
        do {
          puVar1 = (undefined8 *)(uVar4 + 8);
          uVar4 = uVar4 + 8;
          operator_delete((void *)*puVar1);
        } while (uVar4 < uVar3);
        pvVar5 = *(void **)((long)pvVar2 + 0x3050);
      }
      operator_delete(pvVar5);
    }
    pvVar5 = *(void **)((long)pvVar2 + 0x3000);
    if (pvVar5 != (void *)0x0) {
      uVar3 = *(ulong *)((long)pvVar2 + 0x3048);
      if (*(ulong *)((long)pvVar2 + 0x3028) < uVar3 + 8) {
        uVar4 = *(ulong *)((long)pvVar2 + 0x3028) - 8;
        do {
          puVar1 = (undefined8 *)(uVar4 + 8);
          uVar4 = uVar4 + 8;
          operator_delete((void *)*puVar1);
        } while (uVar4 < uVar3);
        pvVar5 = *(void **)((long)pvVar2 + 0x3000);
      }
      operator_delete(pvVar5);
    }
    this_00 = (_Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>>
               *)((long)pvVar2 + 0x2fd0);
    lVar6 = -0x3000;
    do {
                    /* try { // try from 00183ed4 to 00183edb has its CatchHandler @ 00183f18 */
      std::
      _Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>>
      ::_M_erase(this_00,*(void **)(this_00 + 0x10));
      this_00 = this_00 + -0x30;
      lVar6 = lVar6 + 0x30;
    } while (lVar6 != 0);
    operator_delete(pvVar2);
  }
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined ***)(this + 0x20) = &PTR__FLock_00702c68;
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x28));
  return;
}


