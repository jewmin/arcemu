 --[[
   ******************************************************************
   *	 _____              ___                           _         *
   *	(  _  )            (  _`\               _        ( )_       *
   *	| (_) | _ __   ___ | (_(_)   ___  _ __ (_) _ _   | ,_)      *
   *	|  _  |( '__)/'___)`\__ \  /'___)( '__)| |( '_`\ | |        *
   *	| | | || |  ( (___ ( )_) |( (___ | |   | || (_) )| |_       *
   *	(_) (_)(_)  `\____)`\____)`\____)(_)   (_)| ,__/'`\__)      *
   *	                                          | |               *
   *	                                          (_)               *
   *	                                                            *
   *	               OpenSource Scripting Team                    *
   *	                <http://www.arcemu.org>                     *
   *	                                                            *
   ******************************************************************
  
   This software is provided as free and open source by the
staff of The ArcScript Project, in accordance with 
the GPL license. This means we provide the software we have 
created freely and it has been thoroughly tested to work for 
the developers, but NO GUARANTEE is made it will work for you 
as well. Please give credit where credit is due, if modifying,
redistributing and/or using this software. Thank you.

Staff of ArcScript Project, Feb 2008
~~End of License Agreement

#############################################################

-- ]]

function SunbladeKeeper_OnCombat(Unit, Event)
Unit:RegisterEvent("SunbladeKeeper_ShadowBolt", 6000, 40)
end

function SunbladeKeeper_ShadowBolt(Unit, Event)
local boltcheck = Unit:GetRandomPlayer(7)
if (boltcheck ~= nil) then
Unit:FullCastSpellOnTarget(15232, Unit:GetRandomPlayer(7))
end
end


function SunbladeKeeper_LeaveCombat(Unit, Event)
Unit:RemoveEvents()
end

function SunbladeKeeper_Died(Unit, Event)
Unit:RemoveEvents()
end


RegisterUnitEvent(24762, 1, "SunbladeKeeper_OnCombat")
RegisterUnitEvent(24762, 2, "SunbladeKeeper_LeaveCombat")
RegisterUnitEvent(24762, 4, "SunbladeKeeper_Died")
