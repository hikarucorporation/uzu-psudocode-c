// Function : ~array
// Namespace: std:array_AttachedDial_5ul_
// Entry    : 0016b380
// Prototype: undefined ~array(array<AttachedDial,5ul> * this)
// Body     : 0016b380 - 0016b3bc


/* std::array<AttachedDial, 5ul>::~array() */

void __thiscall std::array<AttachedDial,5ul>::~array(array<AttachedDial,5ul> *this)

{
  AttachedDial::~AttachedDial((AttachedDial *)(this + 0x940));
  AttachedDial::~AttachedDial((AttachedDial *)(this + 0x6f0));
  AttachedDial::~AttachedDial((AttachedDial *)(this + 0x4a0));
  AttachedDial::~AttachedDial((AttachedDial *)(this + 0x250));
  AttachedDial::~AttachedDial((AttachedDial *)this);
  return;
}


