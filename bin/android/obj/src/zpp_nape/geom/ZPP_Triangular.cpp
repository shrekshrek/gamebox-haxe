#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionPair
#include <zpp_nape/geom/ZPP_PartitionPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Triangular
#include <zpp_nape/geom/ZPP_Triangular.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPList_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPNode_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionPair
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionPair.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Triangular_obj::__construct()
{
	return null();
}

ZPP_Triangular_obj::~ZPP_Triangular_obj() { }

Dynamic ZPP_Triangular_obj::__CreateEmpty() { return  new ZPP_Triangular_obj; }
hx::ObjectPtr< ZPP_Triangular_obj > ZPP_Triangular_obj::__new()
{  hx::ObjectPtr< ZPP_Triangular_obj > result = new ZPP_Triangular_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Triangular_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Triangular_obj > result = new ZPP_Triangular_obj();
	result->__construct();
	return result;}

bool ZPP_Triangular_obj::lt( ::zpp_nape::geom::ZPP_PartitionVertex p,::zpp_nape::geom::ZPP_PartitionVertex q){
	HX_STACK_PUSH("ZPP_Triangular::lt","zpp_nape/geom/Triangular.hx",579);
	HX_STACK_ARG(p,"p");
	HX_STACK_ARG(q,"q");
	HX_STACK_LINE(579)
	return (bool((p->y < q->y)) || bool((bool((p->y == q->y)) && bool((p->x < q->x)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Triangular_obj,lt,return )

Float ZPP_Triangular_obj::right_turn( ::zpp_nape::geom::ZPP_PartitionVertex a,::zpp_nape::geom::ZPP_PartitionVertex b,::zpp_nape::geom::ZPP_PartitionVertex c){
	HX_STACK_PUSH("ZPP_Triangular::right_turn","zpp_nape/geom/Triangular.hx",583);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(584)
	Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
	HX_STACK_LINE(585)
	Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
	HX_STACK_LINE(586)
	{
		HX_STACK_LINE(587)
		ux = (c->x - b->x);
		HX_STACK_LINE(588)
		uy = (c->y - b->y);
	}
	HX_STACK_LINE(590)
	Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(591)
	Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
	HX_STACK_LINE(592)
	{
		HX_STACK_LINE(593)
		vx = (b->x - a->x);
		HX_STACK_LINE(594)
		vy = (b->y - a->y);
	}
	HX_STACK_LINE(596)
	return ((vy * ux) - (vx * uy));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_Triangular_obj,right_turn,return )

::zpp_nape::util::ZNPList_ZPP_PartitionVertex ZPP_Triangular_obj::queue;

::zpp_nape::util::ZNPList_ZPP_PartitionVertex ZPP_Triangular_obj::stack;

bool ZPP_Triangular_obj::delaunay( ::zpp_nape::geom::ZPP_PartitionVertex A,::zpp_nape::geom::ZPP_PartitionVertex B,::zpp_nape::geom::ZPP_PartitionVertex C,::zpp_nape::geom::ZPP_PartitionVertex D){
	HX_STACK_PUSH("ZPP_Triangular::delaunay","zpp_nape/geom/Triangular.hx",600);
	HX_STACK_ARG(A,"A");
	HX_STACK_ARG(B,"B");
	HX_STACK_ARG(C,"C");
	HX_STACK_ARG(D,"D");
	HX_STACK_LINE(601)
	Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
	HX_STACK_LINE(602)
	Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
	HX_STACK_LINE(603)
	Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
	HX_STACK_LINE(604)
	Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
	struct _Function_1_1{
		inline static bool Block( Float &uy,Float &ux,::zpp_nape::geom::ZPP_PartitionVertex &C,Float &vy,::zpp_nape::geom::ZPP_PartitionVertex &B,Float &vx,::zpp_nape::geom::ZPP_PartitionVertex &A){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Triangular.hx",605);
			{
				HX_STACK_LINE(606)
				{
					HX_STACK_LINE(607)
					ux = (C->x - B->x);
					HX_STACK_LINE(608)
					uy = (C->y - B->y);
				}
				HX_STACK_LINE(610)
				{
					HX_STACK_LINE(611)
					vx = (B->x - A->x);
					HX_STACK_LINE(612)
					vy = (B->y - A->y);
				}
				HX_STACK_LINE(614)
				return (((vy * ux) - (vx * uy)) >= (int)0);
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( Float &uy,Float &ux,::zpp_nape::geom::ZPP_PartitionVertex &D,::zpp_nape::geom::ZPP_PartitionVertex &C,Float &vy,::zpp_nape::geom::ZPP_PartitionVertex &B,Float &vx){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Triangular.hx",615);
			{
				HX_STACK_LINE(616)
				{
					HX_STACK_LINE(617)
					ux = (D->x - C->x);
					HX_STACK_LINE(618)
					uy = (D->y - C->y);
				}
				HX_STACK_LINE(620)
				{
					HX_STACK_LINE(621)
					vx = (C->x - B->x);
					HX_STACK_LINE(622)
					vy = (C->y - B->y);
				}
				HX_STACK_LINE(624)
				return (((vy * ux) - (vx * uy)) >= (int)0);
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static bool Block( Float &uy,Float &ux,::zpp_nape::geom::ZPP_PartitionVertex &D,::zpp_nape::geom::ZPP_PartitionVertex &C,Float &vy,Float &vx,::zpp_nape::geom::ZPP_PartitionVertex &A){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Triangular.hx",625);
			{
				HX_STACK_LINE(626)
				{
					HX_STACK_LINE(627)
					ux = (A->x - D->x);
					HX_STACK_LINE(628)
					uy = (A->y - D->y);
				}
				HX_STACK_LINE(630)
				{
					HX_STACK_LINE(631)
					vx = (D->x - C->x);
					HX_STACK_LINE(632)
					vy = (D->y - C->y);
				}
				HX_STACK_LINE(634)
				return (((vy * ux) - (vx * uy)) >= (int)0);
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static bool Block( Float &uy,Float &ux,::zpp_nape::geom::ZPP_PartitionVertex &D,Float &vy,::zpp_nape::geom::ZPP_PartitionVertex &B,Float &vx,::zpp_nape::geom::ZPP_PartitionVertex &A){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Triangular.hx",635);
			{
				HX_STACK_LINE(636)
				{
					HX_STACK_LINE(637)
					ux = (B->x - A->x);
					HX_STACK_LINE(638)
					uy = (B->y - A->y);
				}
				HX_STACK_LINE(640)
				{
					HX_STACK_LINE(641)
					vx = (A->x - D->x);
					HX_STACK_LINE(642)
					vy = (A->y - D->y);
				}
				HX_STACK_LINE(644)
				return (((vy * ux) - (vx * uy)) >= (int)0);
			}
			return null();
		}
	};
	HX_STACK_LINE(605)
	if (((bool((bool((bool(_Function_1_1::Block(uy,ux,C,vy,B,vx,A)) || bool(_Function_1_2::Block(uy,ux,D,C,vy,B,vx)))) || bool(_Function_1_3::Block(uy,ux,D,C,vy,vx,A)))) || bool(_Function_1_4::Block(uy,ux,D,vy,B,vx,A))))){
		HX_STACK_LINE(645)
		return true;
	}
	HX_STACK_LINE(648)
	return (((((((B->x * (((C->y * D->mag) - (C->mag * D->y)))) - (C->x * (((B->y * D->mag) - (B->mag * D->y))))) + (D->x * (((B->y * C->mag) - (B->mag * C->y))))) - ((((A->x * (((C->y * D->mag) - (C->mag * D->y)))) - (C->x * (((A->y * D->mag) - (A->mag * D->y))))) + (D->x * (((A->y * C->mag) - (A->mag * C->y))))))) + ((((A->x * (((B->y * D->mag) - (B->mag * D->y)))) - (B->x * (((A->y * D->mag) - (A->mag * D->y))))) + (D->x * (((A->y * B->mag) - (A->mag * B->y))))))) - ((((A->x * (((B->y * C->mag) - (B->mag * C->y)))) - (B->x * (((A->y * C->mag) - (A->mag * C->y))))) + (C->x * (((A->y * B->mag) - (A->mag * B->y))))))) > (int)0);
	HX_STACK_LINE(649)
	return (((((((B->x * (((C->y * D->mag) - (C->mag * D->y)))) + (B->y * (((C->mag * D->x) - (C->x * D->mag))))) + (B->mag * (((C->x * D->y) - (C->y * D->x))))) + (A->x * (((((C->mag * D->y) - (C->y * D->mag)) + (B->mag * ((C->y - D->y)))) + (B->y * ((D->mag - C->mag))))))) + (A->y * (((((C->x * D->mag) - (C->mag * D->x)) + (B->mag * ((D->x - C->x)))) + (B->x * ((C->mag - D->mag))))))) + (A->mag * (((((C->y * D->x) - (C->x * D->y)) + (B->x * ((D->y - C->y)))) + (B->y * ((C->x - D->x))))))) > (int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ZPP_Triangular_obj,delaunay,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Triangular_obj::edgeSet;

Void ZPP_Triangular_obj::optimise( ::zpp_nape::geom::ZPP_PartitionedPoly P){
{
		HX_STACK_PUSH("ZPP_Triangular::optimise","zpp_nape/geom/Triangular.hx",652);
		HX_STACK_ARG(P,"P");
		HX_STACK_LINE(653)
		{
			HX_STACK_LINE(654)
			::zpp_nape::geom::ZPP_PartitionVertex F = P->vertices;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(655)
			::zpp_nape::geom::ZPP_PartitionVertex L = P->vertices;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(656)
			if (((F != null()))){
				HX_STACK_LINE(657)
				::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(658)
				do{
					HX_STACK_LINE(659)
					::zpp_nape::geom::ZPP_PartitionVertex p = nite;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(660)
					{
						HX_STACK_LINE(662)
						p->sort();
						HX_STACK_LINE(663)
						p->mag = ((p->x * p->x) + (p->y * p->y));
					}
					HX_STACK_LINE(666)
					nite = nite->next;
				}
while(((nite != L)));
			}
		}
		HX_STACK_LINE(671)
		if (((::zpp_nape::geom::ZPP_Triangular_obj::edgeSet == null()))){
			HX_STACK_LINE(672)
			{
				HX_STACK_LINE(673)
				if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool == null()))){
					HX_STACK_LINE(673)
					::zpp_nape::geom::ZPP_Triangular_obj::edgeSet = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();
				}
				else{
					HX_STACK_LINE(680)
					::zpp_nape::geom::ZPP_Triangular_obj::edgeSet = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
					HX_STACK_LINE(681)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = ::zpp_nape::geom::ZPP_Triangular_obj::edgeSet->next;
					HX_STACK_LINE(682)
					::zpp_nape::geom::ZPP_Triangular_obj::edgeSet->next = null();
				}
				HX_STACK_LINE(687)
				Dynamic();
			}
			HX_STACK_LINE(689)
			::zpp_nape::geom::ZPP_Triangular_obj::edgeSet->lt = ::zpp_nape::geom::ZPP_PartitionPair_obj::edge_lt_dyn();
			HX_STACK_LINE(690)
			::zpp_nape::geom::ZPP_Triangular_obj::edgeSet->swapped = ::zpp_nape::geom::ZPP_PartitionPair_obj::edge_swap_dyn();
		}
		HX_STACK_LINE(692)
		::zpp_nape::geom::ZPP_PartitionPair edgeStack;		HX_STACK_VAR(edgeStack,"edgeStack");
		HX_STACK_LINE(693)
		{
			HX_STACK_LINE(694)
			if (((::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(694)
				edgeStack = ::zpp_nape::geom::ZPP_PartitionPair_obj::__new();
			}
			else{
				HX_STACK_LINE(701)
				edgeStack = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool;
				HX_STACK_LINE(702)
				::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool = edgeStack->next;
				HX_STACK_LINE(703)
				edgeStack->next = null();
			}
			HX_STACK_LINE(708)
			Dynamic();
		}
		HX_STACK_LINE(710)
		{
			HX_STACK_LINE(711)
			::zpp_nape::geom::ZPP_PartitionVertex F = P->vertices;		HX_STACK_VAR(F,"F");
			HX_STACK_LINE(712)
			::zpp_nape::geom::ZPP_PartitionVertex L = P->vertices;		HX_STACK_VAR(L,"L");
			HX_STACK_LINE(713)
			if (((F != null()))){
				HX_STACK_LINE(714)
				::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
				HX_STACK_LINE(715)
				do{
					HX_STACK_LINE(716)
					::zpp_nape::geom::ZPP_PartitionVertex p = nite;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(717)
					{
						HX_STACK_LINE(719)
						::zpp_nape::geom::ZPP_PartitionVertex q0 = p->next;		HX_STACK_VAR(q0,"q0");
						HX_STACK_LINE(720)
						p->diagonals->reverse();
						HX_STACK_LINE(721)
						{
							HX_STACK_LINE(722)
							::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cx_ite = p->diagonals->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(723)
							while(((cx_ite != null()))){
								HX_STACK_LINE(724)
								::zpp_nape::geom::ZPP_PartitionVertex q = cx_ite->elt;		HX_STACK_VAR(q,"q");
								HX_STACK_LINE(725)
								{
									HX_STACK_LINE(726)
									if (((q->id < p->id))){
										HX_STACK_LINE(727)
										q0 = q;
										HX_STACK_LINE(728)
										{
											HX_STACK_LINE(729)
											cx_ite = cx_ite->next;
											HX_STACK_LINE(730)
											continue;
										}
									}
									HX_STACK_LINE(733)
									::zpp_nape::geom::ZPP_PartitionVertex q1 = (  (((cx_ite->next == null()))) ? ::zpp_nape::geom::ZPP_PartitionVertex(p->prev) : ::zpp_nape::geom::ZPP_PartitionVertex(cx_ite->next->elt) );		HX_STACK_VAR(q1,"q1");
									HX_STACK_LINE(734)
									if ((!(::zpp_nape::geom::ZPP_Triangular_obj::delaunay(p,q0,q,q1)))){
										struct _Function_9_1{
											inline static ::zpp_nape::geom::ZPP_PartitionPair Block( ::zpp_nape::geom::ZPP_PartitionVertex &p,::zpp_nape::geom::ZPP_PartitionVertex &q){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/Triangular.hx",735);
												{
													HX_STACK_LINE(735)
													::zpp_nape::geom::ZPP_PartitionPair ret;		HX_STACK_VAR(ret,"ret");
													HX_STACK_LINE(735)
													{
														HX_STACK_LINE(735)
														if (((::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool == null()))){
															HX_STACK_LINE(735)
															ret = ::zpp_nape::geom::ZPP_PartitionPair_obj::__new();
														}
														else{
															HX_STACK_LINE(735)
															ret = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool;
															HX_STACK_LINE(735)
															::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool = ret->next;
															HX_STACK_LINE(735)
															ret->next = null();
														}
														HX_STACK_LINE(735)
														Dynamic();
													}
													HX_STACK_LINE(735)
													ret->a = p;
													HX_STACK_LINE(735)
													ret->b = q;
													HX_STACK_LINE(735)
													if (((p->id < q->id))){
														HX_STACK_LINE(735)
														ret->id = p->id;
														HX_STACK_LINE(735)
														ret->di = q->id;
													}
													else{
														HX_STACK_LINE(735)
														ret->id = q->id;
														HX_STACK_LINE(735)
														ret->di = p->id;
													}
													HX_STACK_LINE(735)
													return ret;
												}
												return null();
											}
										};
										HX_STACK_LINE(735)
										::zpp_nape::geom::ZPP_PartitionPair edge = _Function_9_1::Block(p,q);		HX_STACK_VAR(edge,"edge");
										HX_STACK_LINE(736)
										edgeStack->add(edge);
										HX_STACK_LINE(737)
										edge->node = ::zpp_nape::geom::ZPP_Triangular_obj::edgeSet->insert(edge);
									}
									HX_STACK_LINE(739)
									q0 = q;
								}
								HX_STACK_LINE(741)
								cx_ite = cx_ite->next;
							}
						}
					}
					HX_STACK_LINE(746)
					nite = nite->next;
				}
while(((nite != L)));
			}
		}
		HX_STACK_LINE(751)
		while((!(((edgeStack->next == null()))))){
			HX_STACK_LINE(752)
			::zpp_nape::geom::ZPP_PartitionPair edge = edgeStack->pop_unsafe();		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(753)
			::zpp_nape::geom::ZPP_PartitionVertex A = edge->a;		HX_STACK_VAR(A,"A");
			HX_STACK_LINE(754)
			::zpp_nape::geom::ZPP_PartitionVertex C = edge->b;		HX_STACK_VAR(C,"C");
			HX_STACK_LINE(755)
			::zpp_nape::geom::ZPP_PartitionVertex B = A->next;		HX_STACK_VAR(B,"B");
			HX_STACK_LINE(756)
			::zpp_nape::geom::ZPP_PartitionVertex D = null();		HX_STACK_VAR(D,"D");
			HX_STACK_LINE(757)
			{
				HX_STACK_LINE(758)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cx_ite = A->diagonals->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(759)
				while(((cx_ite != null()))){
					HX_STACK_LINE(760)
					::zpp_nape::geom::ZPP_PartitionVertex p = cx_ite->elt;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(761)
					{
						HX_STACK_LINE(762)
						if (((p == C))){
							HX_STACK_LINE(763)
							cx_ite = cx_ite->next;
							HX_STACK_LINE(764)
							D = (  (((cx_ite == null()))) ? ::zpp_nape::geom::ZPP_PartitionVertex(A->prev) : ::zpp_nape::geom::ZPP_PartitionVertex(cx_ite->elt) );
							HX_STACK_LINE(765)
							break;
						}
						HX_STACK_LINE(767)
						B = p;
					}
					HX_STACK_LINE(769)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(772)
			A->diagonals->remove(C);
			HX_STACK_LINE(773)
			C->diagonals->remove(A);
			HX_STACK_LINE(774)
			if (((C == B->next))){
				HX_STACK_LINE(775)
				B->diagonals->add(D);
			}
			else{
				HX_STACK_LINE(780)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cx_ite = B->diagonals->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(781)
				while(((cx_ite != null()))){
					HX_STACK_LINE(782)
					::zpp_nape::geom::ZPP_PartitionVertex p = cx_ite->elt;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(783)
					if (((p == C))){
						HX_STACK_LINE(785)
						B->diagonals->insert(cx_ite,D);
						HX_STACK_LINE(786)
						break;
					}
					HX_STACK_LINE(789)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(794)
			if (((A == D->next))){
				HX_STACK_LINE(795)
				D->diagonals->add(B);
			}
			else{
				HX_STACK_LINE(800)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cx_ite = D->diagonals->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(801)
				while(((cx_ite != null()))){
					HX_STACK_LINE(802)
					::zpp_nape::geom::ZPP_PartitionVertex p = cx_ite->elt;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(803)
					if (((p == A))){
						HX_STACK_LINE(805)
						D->diagonals->insert(cx_ite,B);
						HX_STACK_LINE(806)
						break;
					}
					HX_STACK_LINE(809)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(814)
			::zpp_nape::geom::ZPP_Triangular_obj::edgeSet->remove_node(edge->node);
			HX_STACK_LINE(815)
			{
				HX_STACK_LINE(816)
				::zpp_nape::geom::ZPP_PartitionPair o = edge;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(817)
				{
				}
				HX_STACK_LINE(825)
				{
					HX_STACK_LINE(825)
					o->a = o->b = null();
					HX_STACK_LINE(825)
					o->node = null();
				}
				HX_STACK_LINE(826)
				o->next = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool;
				HX_STACK_LINE(827)
				::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(833)
		{
			HX_STACK_LINE(834)
			::zpp_nape::geom::ZPP_PartitionPair o = edgeStack;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(835)
			{
			}
			HX_STACK_LINE(843)
			{
				HX_STACK_LINE(843)
				o->a = o->b = null();
				HX_STACK_LINE(843)
				o->node = null();
			}
			HX_STACK_LINE(844)
			o->next = ::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool;
			HX_STACK_LINE(845)
			::zpp_nape::geom::ZPP_PartitionPair_obj::zpp_pool = o;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Triangular_obj,optimise,(void))

::zpp_nape::geom::ZPP_PartitionedPoly ZPP_Triangular_obj::triangulate( ::zpp_nape::geom::ZPP_PartitionedPoly P){
	HX_STACK_PUSH("ZPP_Triangular::triangulate","zpp_nape/geom/Triangular.hx",851);
	HX_STACK_ARG(P,"P");
	HX_STACK_LINE(852)
	::zpp_nape::geom::ZPP_PartitionVertex min = P->vertices;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(853)
	::zpp_nape::geom::ZPP_PartitionVertex max = P->vertices;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(854)
	{
		HX_STACK_LINE(855)
		::zpp_nape::geom::ZPP_PartitionVertex F = P->vertices->next;		HX_STACK_VAR(F,"F");
		HX_STACK_LINE(856)
		::zpp_nape::geom::ZPP_PartitionVertex L = P->vertices;		HX_STACK_VAR(L,"L");
		HX_STACK_LINE(857)
		if (((F != null()))){
			HX_STACK_LINE(858)
			::zpp_nape::geom::ZPP_PartitionVertex nite = F;		HX_STACK_VAR(nite,"nite");
			HX_STACK_LINE(859)
			do{
				HX_STACK_LINE(860)
				::zpp_nape::geom::ZPP_PartitionVertex p = nite;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(861)
				{
					HX_STACK_LINE(863)
					if (((bool((p->y < min->y)) || bool((bool((p->y == min->y)) && bool((p->x < min->x))))))){
						HX_STACK_LINE(863)
						min = p;
					}
					HX_STACK_LINE(864)
					if (((bool((max->y < p->y)) || bool((bool((max->y == p->y)) && bool((max->x < p->x))))))){
						HX_STACK_LINE(864)
						max = p;
					}
				}
				HX_STACK_LINE(867)
				nite = nite->next;
			}
while(((nite != L)));
		}
	}
	HX_STACK_LINE(872)
	if (((::zpp_nape::geom::ZPP_Triangular_obj::queue == null()))){
		HX_STACK_LINE(872)
		::zpp_nape::geom::ZPP_Triangular_obj::queue = ::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj::__new();
	}
	HX_STACK_LINE(873)
	::zpp_nape::geom::ZPP_PartitionVertex rp = max->prev;		HX_STACK_VAR(rp,"rp");
	HX_STACK_LINE(874)
	::zpp_nape::geom::ZPP_PartitionVertex lp = max->next;		HX_STACK_VAR(lp,"lp");
	HX_STACK_LINE(875)
	::zpp_nape::geom::ZPP_Triangular_obj::queue->add(max);
	HX_STACK_LINE(876)
	while(((bool((rp != min)) || bool((lp != min))))){
		HX_STACK_LINE(876)
		if (((bool((rp == min)) || bool((bool((lp != min)) && bool(((bool((rp->y < lp->y)) || bool((bool((rp->y == lp->y)) && bool((rp->x < lp->x)))))))))))){
			HX_STACK_LINE(878)
			::zpp_nape::geom::ZPP_Triangular_obj::queue->add(lp);
			HX_STACK_LINE(879)
			lp->rightchain = false;
			HX_STACK_LINE(880)
			lp = lp->next;
		}
		else{
			HX_STACK_LINE(883)
			::zpp_nape::geom::ZPP_Triangular_obj::queue->add(rp);
			HX_STACK_LINE(884)
			rp->rightchain = true;
			HX_STACK_LINE(885)
			rp = rp->prev;
		}
	}
	HX_STACK_LINE(888)
	::zpp_nape::geom::ZPP_Triangular_obj::queue->add(min);
	HX_STACK_LINE(889)
	if (((::zpp_nape::geom::ZPP_Triangular_obj::stack == null()))){
		HX_STACK_LINE(889)
		::zpp_nape::geom::ZPP_Triangular_obj::stack = ::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj::__new();
	}
	HX_STACK_LINE(890)
	::zpp_nape::geom::ZPP_Triangular_obj::stack->add(::zpp_nape::geom::ZPP_Triangular_obj::queue->pop_unsafe());
	HX_STACK_LINE(891)
	::zpp_nape::geom::ZPP_PartitionVertex pre = ::zpp_nape::geom::ZPP_Triangular_obj::queue->pop_unsafe();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(892)
	::zpp_nape::geom::ZPP_Triangular_obj::stack->add(pre);
	HX_STACK_LINE(893)
	while((true)){
		HX_STACK_LINE(894)
		::zpp_nape::geom::ZPP_PartitionVertex p = ::zpp_nape::geom::ZPP_Triangular_obj::queue->pop_unsafe();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(895)
		if (((::zpp_nape::geom::ZPP_Triangular_obj::queue->head == null()))){
			HX_STACK_LINE(895)
			break;
		}
		HX_STACK_LINE(896)
		if (((p->rightchain != ::zpp_nape::geom::ZPP_Triangular_obj::stack->head->elt->rightchain))){
			HX_STACK_LINE(897)
			while((true)){
				HX_STACK_LINE(898)
				::zpp_nape::geom::ZPP_PartitionVertex s = ::zpp_nape::geom::ZPP_Triangular_obj::stack->pop_unsafe();		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(899)
				if (((::zpp_nape::geom::ZPP_Triangular_obj::stack->head == null()))){
					HX_STACK_LINE(899)
					break;
				}
				HX_STACK_LINE(900)
				P->add_diagonal(s,p);
			}
			HX_STACK_LINE(902)
			::zpp_nape::geom::ZPP_Triangular_obj::stack->add(pre);
		}
		else{
			HX_STACK_LINE(905)
			::zpp_nape::geom::ZPP_PartitionVertex q = ::zpp_nape::geom::ZPP_Triangular_obj::stack->pop_unsafe();		HX_STACK_VAR(q,"q");
			HX_STACK_LINE(906)
			while((!(((::zpp_nape::geom::ZPP_Triangular_obj::stack->head == null()))))){
				HX_STACK_LINE(907)
				::zpp_nape::geom::ZPP_PartitionVertex s = ::zpp_nape::geom::ZPP_Triangular_obj::stack->head->elt;		HX_STACK_VAR(s,"s");
				struct _Function_4_1{
					inline static Float Block( ::zpp_nape::geom::ZPP_PartitionVertex &q,::zpp_nape::geom::ZPP_PartitionVertex &p,::zpp_nape::geom::ZPP_PartitionVertex &s){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Triangular.hx",908);
						{
							HX_STACK_LINE(908)
							Float ux = 0.0;		HX_STACK_VAR(ux,"ux");
							HX_STACK_LINE(908)
							Float uy = 0.0;		HX_STACK_VAR(uy,"uy");
							HX_STACK_LINE(908)
							{
								HX_STACK_LINE(908)
								ux = (p->x - q->x);
								HX_STACK_LINE(908)
								uy = (p->y - q->y);
							}
							HX_STACK_LINE(908)
							Float vx = 0.0;		HX_STACK_VAR(vx,"vx");
							HX_STACK_LINE(908)
							Float vy = 0.0;		HX_STACK_VAR(vy,"vy");
							HX_STACK_LINE(908)
							{
								HX_STACK_LINE(908)
								vx = (q->x - s->x);
								HX_STACK_LINE(908)
								vy = (q->y - s->y);
							}
							HX_STACK_LINE(908)
							return ((vy * ux) - (vx * uy));
						}
						return null();
					}
				};
				HX_STACK_LINE(908)
				Float right = _Function_4_1::Block(q,p,s);		HX_STACK_VAR(right,"right");
				HX_STACK_LINE(909)
				if (((bool((bool(p->rightchain) && bool((right >= (int)0)))) || bool((bool(!(p->rightchain)) && bool((right <= (int)0))))))){
					HX_STACK_LINE(909)
					break;
				}
				HX_STACK_LINE(910)
				P->add_diagonal(s,p);
				HX_STACK_LINE(911)
				q = s;
				HX_STACK_LINE(912)
				::zpp_nape::geom::ZPP_Triangular_obj::stack->pop();
			}
			HX_STACK_LINE(914)
			::zpp_nape::geom::ZPP_Triangular_obj::stack->add(q);
		}
		HX_STACK_LINE(916)
		::zpp_nape::geom::ZPP_Triangular_obj::stack->add(p);
		HX_STACK_LINE(917)
		pre = p;
	}
	HX_STACK_LINE(919)
	if ((!(((::zpp_nape::geom::ZPP_Triangular_obj::stack->head == null()))))){
		HX_STACK_LINE(920)
		::zpp_nape::geom::ZPP_Triangular_obj::stack->pop();
		HX_STACK_LINE(921)
		while((!(((::zpp_nape::geom::ZPP_Triangular_obj::stack->head == null()))))){
			HX_STACK_LINE(922)
			::zpp_nape::geom::ZPP_PartitionVertex s = ::zpp_nape::geom::ZPP_Triangular_obj::stack->pop_unsafe();		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(923)
			if (((::zpp_nape::geom::ZPP_Triangular_obj::stack->head == null()))){
				HX_STACK_LINE(923)
				break;
			}
			HX_STACK_LINE(924)
			P->add_diagonal(max,s);
		}
	}
	HX_STACK_LINE(927)
	return P;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ZPP_Triangular_obj,triangulate,return )


ZPP_Triangular_obj::ZPP_Triangular_obj()
{
}

void ZPP_Triangular_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Triangular);
	HX_MARK_END_CLASS();
}

void ZPP_Triangular_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ZPP_Triangular_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { return lt_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { return queue; }
		if (HX_FIELD_EQ(inName,"stack") ) { return stack; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"edgeSet") ) { return edgeSet; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"delaunay") ) { return delaunay_dyn(); }
		if (HX_FIELD_EQ(inName,"optimise") ) { return optimise_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"right_turn") ) { return right_turn_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"triangulate") ) { return triangulate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Triangular_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { queue=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_PartitionVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stack") ) { stack=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_PartitionVertex >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"edgeSet") ) { edgeSet=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Triangular_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lt"),
	HX_CSTRING("right_turn"),
	HX_CSTRING("queue"),
	HX_CSTRING("stack"),
	HX_CSTRING("delaunay"),
	HX_CSTRING("edgeSet"),
	HX_CSTRING("optimise"),
	HX_CSTRING("triangulate"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Triangular_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Triangular_obj::queue,"queue");
	HX_MARK_MEMBER_NAME(ZPP_Triangular_obj::stack,"stack");
	HX_MARK_MEMBER_NAME(ZPP_Triangular_obj::edgeSet,"edgeSet");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Triangular_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Triangular_obj::queue,"queue");
	HX_VISIT_MEMBER_NAME(ZPP_Triangular_obj::stack,"stack");
	HX_VISIT_MEMBER_NAME(ZPP_Triangular_obj::edgeSet,"edgeSet");
};

Class ZPP_Triangular_obj::__mClass;

void ZPP_Triangular_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_Triangular"), hx::TCanCast< ZPP_Triangular_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Triangular_obj::__boot()
{
	queue= null();
	stack= null();
	edgeSet= null();
}

} // end namespace zpp_nape
} // end namespace geom
