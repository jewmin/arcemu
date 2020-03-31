/*
 * ArcEmu MMORPG Server
 * Copyright (C) 2005-2007 Ascent Team <http://www.ascentemu.com/>
 * Copyright (C) 2008-2009 <http://www.ArcEmu.org/>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef _SPELLFAILURE_H
#define _SPELLFAILURE_H

enum SpellCastError
{
	SPELL_FAILED_AFFECTING_COMBAT                                = 0,
	SPELL_FAILED_ALREADY_AT_FULL_HEALTH                          = 1,
	SPELL_FAILED_ALREADY_AT_FULL_MANA                            = 2,
	SPELL_FAILED_ALREADY_AT_FULL_POWER                           = 3,
	SPELL_FAILED_ALREADY_BEING_TAMED                             = 4,
	SPELL_FAILED_ALREADY_HAVE_CHARM                              = 5,
	SPELL_FAILED_ALREADY_HAVE_SUMMON                             = 6,
	SPELL_FAILED_ALREADY_OPEN                                    = 7,
	SPELL_FAILED_AURA_BOUNCED                                    = 8,
	SPELL_FAILED_AUTOTRACK_INTERRUPTED                           = 9,
	SPELL_FAILED_BAD_IMPLICIT_TARGETS                            = 10,
	SPELL_FAILED_BAD_TARGETS                                     = 11,
	SPELL_FAILED_CANT_BE_CHARMED                                 = 12,
	SPELL_FAILED_CANT_BE_DISENCHANTED                            = 13,
	SPELL_FAILED_CANT_BE_DISENCHANTED_SKILL                      = 14,
	SPELL_FAILED_CANT_BE_MILLED                                  = 15,
	SPELL_FAILED_CANT_BE_PROSPECTED                              = 16,
	SPELL_FAILED_CANT_CAST_ON_TAPPED                             = 17,
	SPELL_FAILED_CANT_DUEL_WHILE_INVISIBLE                       = 18,
	SPELL_FAILED_CANT_DUEL_WHILE_STEALTHED                       = 19,
	SPELL_FAILED_CANT_STEALTH                                    = 20,
	SPELL_FAILED_CASTER_AURASTATE                                = 21,
	SPELL_FAILED_CASTER_DEAD                                     = 22,
	SPELL_FAILED_CHARMED                                         = 23,
	SPELL_FAILED_CHEST_IN_USE                                    = 24,
	SPELL_FAILED_CONFUSED                                        = 25,
	SPELL_FAILED_DONT_REPORT                                     = 26,
	SPELL_FAILED_EQUIPPED_ITEM                                   = 27,
	SPELL_FAILED_EQUIPPED_ITEM_CLASS                             = 28,
	SPELL_FAILED_EQUIPPED_ITEM_CLASS_MAINHAND                    = 29,
	SPELL_FAILED_EQUIPPED_ITEM_CLASS_OFFHAND                     = 30,
	SPELL_FAILED_ERROR                                           = 31,
	SPELL_FAILED_FIZZLE                                          = 32,
	SPELL_FAILED_FLEEING                                         = 33,
	SPELL_FAILED_FOOD_LOWLEVEL                                   = 34,
	SPELL_FAILED_HIGHLEVEL                                       = 35,
	SPELL_FAILED_HUNGER_SATIATED                                 = 36,
	SPELL_FAILED_IMMUNE                                          = 37,
	SPELL_FAILED_INCORRECT_AREA                                  = 38,
	SPELL_FAILED_INTERRUPTED                                     = 39,
	SPELL_FAILED_INTERRUPTED_COMBAT                              = 40,
	SPELL_FAILED_ITEM_ALREADY_ENCHANTED                          = 41,
	SPELL_FAILED_ITEM_GONE                                       = 42,
	SPELL_FAILED_ITEM_NOT_FOUND                                  = 43,
	SPELL_FAILED_ITEM_NOT_READY                                  = 44,
	SPELL_FAILED_LEVEL_REQUIREMENT                               = 45,
	SPELL_FAILED_LINE_OF_SIGHT                                   = 46,
	SPELL_FAILED_LOWLEVEL                                        = 47,
	SPELL_FAILED_LOW_CASTLEVEL                                   = 48,
	SPELL_FAILED_MAINHAND_EMPTY                                  = 49,
	SPELL_FAILED_MOVING                                          = 50,
	SPELL_FAILED_NEED_AMMO                                       = 51,
	SPELL_FAILED_NEED_AMMO_POUCH                                 = 52,
	SPELL_FAILED_NEED_EXOTIC_AMMO                                = 53,
	SPELL_FAILED_NEED_MORE_ITEMS                                 = 54,
	SPELL_FAILED_NOPATH                                          = 55,
	SPELL_FAILED_NOT_BEHIND                                      = 56,
	SPELL_FAILED_NOT_FISHABLE                                    = 57,
	SPELL_FAILED_NOT_FLYING                                      = 58,
	SPELL_FAILED_NOT_HERE                                        = 59,
	SPELL_FAILED_NOT_INFRONT                                     = 60,
	SPELL_FAILED_NOT_IN_CONTROL                                  = 61,
	SPELL_FAILED_NOT_KNOWN                                       = 62,
	SPELL_FAILED_NOT_MOUNTED                                     = 63,
	SPELL_FAILED_NOT_ON_TAXI                                     = 64,
	SPELL_FAILED_NOT_ON_TRANSPORT                                = 65,
	SPELL_FAILED_NOT_READY                                       = 66,
	SPELL_FAILED_NOT_SHAPESHIFT                                  = 67,
	SPELL_FAILED_NOT_STANDING                                    = 68,
	SPELL_FAILED_NOT_TRADEABLE                                   = 69,
	SPELL_FAILED_NOT_TRADING                                     = 70,
	SPELL_FAILED_NOT_UNSHEATHED                                  = 71,
	SPELL_FAILED_NOT_WHILE_GHOST                                 = 72,
	SPELL_FAILED_NOT_WHILE_LOOTING                               = 73,
	SPELL_FAILED_NO_AMMO                                         = 74,
	SPELL_FAILED_NO_CHARGES_REMAIN                               = 75,
	SPELL_FAILED_NO_CHAMPION                                     = 76,
	SPELL_FAILED_NO_COMBO_POINTS                                 = 77,
	SPELL_FAILED_NO_DUELING                                      = 78,
	SPELL_FAILED_NO_ENDURANCE                                    = 79,
	SPELL_FAILED_NO_FISH                                         = 80,
	SPELL_FAILED_NO_ITEMS_WHILE_SHAPESHIFTED                     = 81,
	SPELL_FAILED_NO_MOUNTS_ALLOWED                               = 82,
	SPELL_FAILED_NO_PET                                          = 83,
	SPELL_FAILED_NO_POWER                                        = 84,
	SPELL_FAILED_NOTHING_TO_DISPEL                               = 85,
	SPELL_FAILED_NOTHING_TO_STEAL                                = 86,
	SPELL_FAILED_ONLY_ABOVEWATER                                 = 87,
	SPELL_FAILED_ONLY_DAYTIME                                    = 88,
	SPELL_FAILED_ONLY_INDOORS                                    = 89,
	SPELL_FAILED_ONLY_MOUNTED                                    = 90,
	SPELL_FAILED_ONLY_NIGHTTIME                                  = 91,
	SPELL_FAILED_ONLY_OUTDOORS                                   = 92,
	SPELL_FAILED_ONLY_SHAPESHIFT                                 = 93,
	SPELL_FAILED_ONLY_STEALTHED                                  = 94,
	SPELL_FAILED_ONLY_UNDERWATER                                 = 95,
	SPELL_FAILED_OUT_OF_RANGE                                    = 96,
	SPELL_FAILED_PACIFIED                                        = 97,
	SPELL_FAILED_POSSESSED                                       = 98,
	SPELL_FAILED_REAGENTS                                        = 99,
	SPELL_FAILED_REQUIRES_AREA                                   = 100,
	SPELL_FAILED_REQUIRES_SPELL_FOCUS                            = 101,
	SPELL_FAILED_ROOTED                                          = 102,
	SPELL_FAILED_SILENCED                                        = 103,
	SPELL_FAILED_SPELL_IN_PROGRESS                               = 104,
	SPELL_FAILED_SPELL_LEARNED                                   = 105,
	SPELL_FAILED_SPELL_UNAVAILABLE                               = 106,
	SPELL_FAILED_STUNNED                                         = 107,
	SPELL_FAILED_TARGETS_DEAD                                    = 108,
	SPELL_FAILED_TARGET_AFFECTING_COMBAT                         = 109,
	SPELL_FAILED_TARGET_AURASTATE                                = 110,
	SPELL_FAILED_TARGET_DUELING                                  = 111,
	SPELL_FAILED_TARGET_ENEMY                                    = 112,
	SPELL_FAILED_TARGET_ENRAGED                                  = 113,
	SPELL_FAILED_TARGET_FRIENDLY                                 = 114,
	SPELL_FAILED_TARGET_IN_COMBAT                                = 115,
	SPELL_FAILED_TARGET_IS_PLAYER                                = 116,
	SPELL_FAILED_TARGET_IS_PLAYER_CONTROLLED                     = 117,
	SPELL_FAILED_TARGET_NOT_DEAD                                 = 118,
	SPELL_FAILED_TARGET_NOT_IN_PARTY                             = 119,
	SPELL_FAILED_TARGET_NOT_LOOTED                               = 120,
	SPELL_FAILED_TARGET_NOT_PLAYER                               = 121,
	SPELL_FAILED_TARGET_NO_POCKETS                               = 122,
	SPELL_FAILED_TARGET_NO_WEAPONS                               = 123,
	SPELL_FAILED_TARGET_NO_RANGED_WEAPONS                        = 124,
	SPELL_FAILED_TARGET_UNSKINNABLE                              = 125,
	SPELL_FAILED_THIRST_SATIATED                                 = 126,
	SPELL_FAILED_TOO_CLOSE                                       = 127,
	SPELL_FAILED_TOO_MANY_OF_ITEM                                = 128,
	SPELL_FAILED_TOTEM_CATEGORY                                  = 129,
	SPELL_FAILED_TOTEMS                                          = 130,
	SPELL_FAILED_TRY_AGAIN                                       = 131,
	SPELL_FAILED_UNIT_NOT_BEHIND                                 = 132,
	SPELL_FAILED_UNIT_NOT_INFRONT                                = 133,
	SPELL_FAILED_WRONG_PET_FOOD                                  = 134,
	SPELL_FAILED_NOT_WHILE_FATIGUED                              = 135,
	SPELL_FAILED_TARGET_NOT_IN_INSTANCE                          = 136,
	SPELL_FAILED_NOT_WHILE_TRADING                               = 137,
	SPELL_FAILED_TARGET_NOT_IN_RAID                              = 138,
	SPELL_FAILED_TARGET_FREEFORALL                               = 139,
	SPELL_FAILED_NO_EDIBLE_CORPSES                               = 140,
	SPELL_FAILED_ONLY_BATTLEGROUNDS                              = 141,
	SPELL_FAILED_TARGET_NOT_GHOST                                = 142,
	SPELL_FAILED_TRANSFORM_UNUSABLE                              = 143,
	SPELL_FAILED_WRONG_WEATHER                                   = 144,
	SPELL_FAILED_DAMAGE_IMMUNE                                   = 145,
	SPELL_FAILED_PREVENTED_BY_MECHANIC                           = 146,
	SPELL_FAILED_PLAY_TIME                                       = 147,
	SPELL_FAILED_REPUTATION                                      = 148,
	SPELL_FAILED_MIN_SKILL                                       = 149,
	SPELL_FAILED_NOT_IN_ARENA                                    = 150,
	SPELL_FAILED_NOT_ON_SHAPESHIFT                               = 151,
	SPELL_FAILED_NOT_ON_STEALTHED                                = 152,
	SPELL_FAILED_NOT_ON_DAMAGE_IMMUNE                            = 153,
	SPELL_FAILED_NOT_ON_MOUNTED                                  = 154,
	SPELL_FAILED_TOO_SHALLOW                                     = 155,
	SPELL_FAILED_TARGET_NOT_IN_SANCTUARY                         = 156,
	SPELL_FAILED_TARGET_IS_TRIVIAL                               = 157,
	SPELL_FAILED_BM_OR_INVISGOD                                  = 158,
	SPELL_FAILED_EXPERT_RIDING_REQUIREMENT                       = 159,
	SPELL_FAILED_ARTISAN_RIDING_REQUIREMENT                      = 160,
	SPELL_FAILED_NOT_IDLE                                        = 161,
	SPELL_FAILED_NOT_INACTIVE                                    = 162,
	SPELL_FAILED_PARTIAL_PLAYTIME                                = 163,
	SPELL_FAILED_NO_PLAYTIME                                     = 164,
	SPELL_FAILED_NOT_IN_BATTLEGROUND                             = 165,
	SPELL_FAILED_NOT_IN_RAID_INSTANCE                            = 166,
	SPELL_FAILED_ONLY_IN_ARENA                                   = 167,
	SPELL_FAILED_TARGET_LOCKED_TO_RAID_INSTANCE                  = 168,
	SPELL_FAILED_ON_USE_ENCHANT                                  = 169,
	SPELL_FAILED_NOT_ON_GROUND                                   = 170,
	SPELL_FAILED_CUSTOM_ERROR                                    = 171,
	SPELL_FAILED_CANT_DO_THAT_RIGHT_NOW                          = 172,
	SPELL_FAILED_TOO_MANY_SOCKETS                                = 173,
	SPELL_FAILED_INVALID_GLYPH                                   = 174,
	SPELL_FAILED_UNIQUE_GLYPH                                    = 175,
	SPELL_FAILED_GLYPH_SOCKET_LOCKED                             = 176,
	SPELL_FAILED_NO_VALID_TARGETS                                = 177,
	SPELL_FAILED_ITEM_AT_MAX_CHARGES                             = 178,
	SPELL_FAILED_NOT_IN_BARBERSHOP                               = 179,
	SPELL_FAILED_FISHING_TOO_LOW                                 = 180,
	SPELL_FAILED_ITEM_ENCHANT_TRADE_WINDOW						 = 181,
	SPELL_FAILED_UNKNOWN                                         = 182,
	SPELL_CANCAST_OK                                             = 255,
};

enum PetTameFailure
{
	PETTAME_INVALIDCREATURE			= 1,
	PETTAME_TOOMANY					= 2,
	PETTAME_CREATUREALREADYOWNED	= 3,
	PETTAME_NOTTAMEABLE				= 4,
	PETTAME_ANOTHERSUMMONACTIVE		= 5,
	PETTAME_UNITSCANTTAME			= 6,
	PETTAME_NOPETAVAILABLE			= 7,
	PETTAME_INTERNALERROR			= 8,
	PETTAME_TOOHIGHLEVEL			= 9,
	PETTAME_DEAD					= 10,
	PETTAME_NOTDEAD					= 11,
	PETTAME_CANTCONTROLEXOTIC		= 12, // Used if you do not have the beast mastery talent for hunters and try to tame an exotic pet
	PETTAME_UNKNOWNERROR			= 13,
};

enum MOUNT_FAILURE
{
	ERR_MOUNT_NOTMOUNTABLE                                       = 0,
	ERR_MOUNT_TOOFARAWAY                                         = 1,
	ERR_MOUNT_ALREADYMOUNTED                                     = 2,
	ERR_MOUNT_INVALIDMOUNTEE                                     = 3,
	ERR_MOUNT_NOTYOURPET                                         = 4,
	ERR_MOUNT_OTHER                                              = 5,
	ERR_MOUNT_LOOTING                                            = 6,
	ERR_MOUNT_RACECANTMOUNT                                      = 7,
	ERR_MOUNT_SHAPESHIFTED                                       = 8,
	ERR_MOUNT_FORCEDDISMOUNT                                     = 9
};

enum DISMOUNT_FAILURE
{
	ERR_DISMOUNT_NOPET											 = 0,
	ERR_DISMOUNT_NOTMOUNTED                                      = 1,
	ERR_DISMOUNT_NOTYOURPET                                      = 2
};
#endif

