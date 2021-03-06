// L1TUtmTriggerMenuRcd                                                                                            
// Description: Record for L1TUtmTriggerMenu
//
// automatically generate by make_records.pl
//
#ifndef CondFormatsDataRecord_L1TUtmTriggerMenu_h
#define CondFormatsDataRecord_L1TUtmTriggerMenu_h

///#include "FWCore/Framework/interface/EventSetupRecordImplementation.h"
///
///class L1TUtmTriggerMenuRcd : public edm::eventsetup::EventSetupRecordImplementation<L1TUtmTriggerMenuRcd> {};

// Dependent record implmentation:
#include "FWCore/Framework/interface/DependentRecordImplementation.h"
#include "CondFormats/DataRecord/interface/L1TriggerKeyListExtRcd.h"
#include "CondFormats/DataRecord/interface/L1TriggerKeyExtRcd.h"
class L1TUtmTriggerMenuRcd : public edm::eventsetup::DependentRecordImplementation<L1TUtmTriggerMenuRcd, boost::mpl::vector<L1TriggerKeyListExtRcd,L1TriggerKeyExtRcd> > {};

#endif
