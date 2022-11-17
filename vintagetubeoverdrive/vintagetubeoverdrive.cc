// generated from file '/home/brummer/projecte/guitarix-git/trunk/tools/ampsim/DK/dkbuild/vintagetubeoverdrive/vintagetubeoverdrive.dsp' by dsp2cc:
// Code generated with Faust 2.50.6 (https://faust.grame.fr)

#include <cmath>
#include <algorithm>

#define FAUSTFLOAT float

using std::signbit;

template<class T> inline T mydsp_faustpower2_f(T x) {return (x * x);}
template<class T> inline T mydsp_faustpower3_f(T x) {return ((x * x) * x);}
template<class T> inline T mydsp_faustpower4_f(T x) {return (((x * x) * x) * x);}
template<class T> inline T mydsp_faustpower5_f(T x) {return ((((x * x) * x) * x) * x);}
template<class T> inline T mydsp_faustpower6_f(T x) {return (((((x * x) * x) * x) * x) * x);}

#define always_inline inline __attribute__((__always_inline__))

typedef enum
{
   input0,
   output0,
   bypass,
   DRIVE, // , 0.5, 0.0, 1.0, 0.01 
   TONE, // , 0.5, 0.0, 1.0, 0.01 
   VOLUME, // , 0.5, 0.0, 1.0, 0.01 
} PortIndex;

#include "vintagetubedriver_p2_table.h"

namespace vintagetubeoverdrive {

class Dsp {
private:
	uint32_t fSampleRate;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT	*fVslider0_;
	double fRec0[2];
	double fConst3;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT	*fVslider1_;
	double fRec2[2];
	double fConst4;
	double fConst6;
	double fConst8;
	double fConst10;
	double fConst11;
	double fConst12;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT	*fVslider2_;
	double fRec4[2];
	double fConst14;
	double fConst16;
	double fConst17;
	double fConst18;
	double fConst20;
	double fConst22;
	double fConst23;
	double fConst24;
	double fConst25;
	double fConst26;
	double fRec5[5];
	double fConst27;
	double fRec3[4];
	double fConst28;
	double fConst29;
	double fRec1[2];
	double fConst30;


public:
	void connect(uint32_t port,void* data);
	void del_instance(Dsp *p);
	void clear_state_f();
	void init(uint32_t sample_rate);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);
	Dsp();
	~Dsp();
};



Dsp::Dsp() {
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int l0 = 0; l0 < 2; l0 = l0 + 1) fRec0[l0] = 0.0;
	for (int l1 = 0; l1 < 2; l1 = l1 + 1) fRec2[l1] = 0.0;
	for (int l2 = 0; l2 < 2; l2 = l2 + 1) fRec4[l2] = 0.0;
	for (int l3 = 0; l3 < 5; l3 = l3 + 1) fRec5[l3] = 0.0;
	for (int l4 = 0; l4 < 4; l4 = l4 + 1) fRec3[l4] = 0.0;
	for (int l5 = 0; l5 < 2; l5 = l5 + 1) fRec1[l5] = 0.0;
}

inline void Dsp::init(uint32_t sample_rate)
{
	fSampleRate = sample_rate;
	double fConst0 = std::min<double>(1.92e+05, std::max<double>(1.0, double(fSampleRate)));
	double fConst1 = 2.0833311631967e-05 * fConst0;
	double fConst2 = fConst1 + 1.04166558159835e-06;
	fConst3 = (1.04166558159835e-06 - fConst1) / fConst2;
	fConst4 = mydsp_faustpower3_f(fConst0);
	double fConst5 = mydsp_faustpower2_f(fConst0);
	fConst6 = 1.60672854703873e-11 * fConst5;
	double fConst7 = 8.70253913610682e-15 * fConst0;
	fConst8 = fConst0 * (fConst0 * (1.61386401890662e-11 - fConst7) + -8.01348882317983e-09) + 7.17400553341744e-07;
	double fConst9 = 2.61076174083205e-14 * fConst0;
	fConst10 = fConst0 * (fConst0 * (fConst9 + -1.61386401890662e-11) + -8.01348882317983e-09) + 2.15220166002523e-06;
	fConst11 = fConst0 * (fConst0 * (-1.61386401890662e-11 - fConst9) + 8.01348882317983e-09) + 2.15220166002523e-06;
	fConst12 = 1.0 / (fConst0 * (fConst0 * (fConst7 + 1.61386401890662e-11) + 8.01348882317983e-09) + 7.17400553341744e-07);
	double fConst13 = 2.47143558158841e-19 * fConst0;
	fConst14 = fConst0 * (fConst0 * (fConst0 * (fConst13 + 1.26789641493622e-15) + 1.04220801979972e-13) + 9.59649199889129e-13) + 2.3917927064341e-14;
	double fConst15 = 2.47143558158842e-15 * fConst0;
	fConst16 = fConst0 * (fConst0 * (fConst15 + 2.0781652178362e-13) + 1.91927683637056e-12);
	fConst17 = fConst0 * (fConst0 * (fConst0 * (fConst13 + -1.26789641493622e-15) + 1.04220801979972e-13) + -9.59649199889129e-13) + 2.3917927064341e-14;
	fConst18 = fConst0 * (fConst0 * (2.0781652178362e-13 - fConst15) + -1.91927683637056e-12);
	double fConst19 = 9.88574232635365e-19 * fConst0;
	fConst20 = fConst0 * (fConst5 * (2.53579282987245e-15 - fConst19) + -1.91929839977826e-12) + 9.5671708257364e-14;
	double fConst21 = 4.94287116317683e-15 * fConst5;
	fConst22 = fConst0 * (fConst21 + -3.83855367274112e-12);
	fConst23 = 4.1563304356724e-13 * fConst5;
	fConst24 = fConst5 * (1.48286134895305e-18 * fConst5 + -2.08441603959944e-13) + 1.43507562386046e-13;
	fConst25 = fConst0 * (fConst5 * (-2.53579282987245e-15 - fConst19) + 1.91929839977826e-12) + 9.5671708257364e-14;
	fConst26 = fConst0 * (3.83855367274112e-12 - fConst21);
	fConst27 = 2.0 * fConst4;
	fConst28 = 4.53097450264922e-14 * fConst4;
	fConst29 = 1.51032483421641e-14 * fConst4;
	fConst30 = 2.0 * (fConst0 / fConst2);
	clear_state_f();
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fVslider0 (*fVslider0_)
#define fVslider1 (*fVslider1_)
#define fVslider2 (*fVslider2_)
	double fSlow0 = 0.00036676987543879196 * (std::exp(3.0 * double(fVslider0)) + -1.0);
	double fSlow1 = 0.007000000000000006 * double(fVslider1);
	double fSlow2 = 4.748558434412966e-05 * (std::exp(5.0 * double(fVslider2)) + -1.0);
	for (int i0 = 0; i0 < count; i0 = i0 + 1) {
		fRec0[0] = fSlow0 + 0.993 * fRec0[1];
		fRec2[0] = fSlow1 + 0.993 * fRec2[1];
		fRec4[0] = fSlow2 + 0.993 * fRec4[1];
		double fTemp0 = fConst16 + fConst14 * fRec4[0] + 4.7835854128682e-14;
		fRec5[0] = double(input0[i0]) - (fRec5[1] * (fConst26 + fConst25 * fRec4[0] + 1.91343416514728e-13) + fRec5[2] * (fConst24 * fRec4[0] + 2.87015124772092e-13 - fConst23) + fRec5[3] * (fConst22 + fConst20 * fRec4[0] + 1.91343416514728e-13) + fRec5[4] * (fConst18 + fConst17 * fRec4[0] + 4.7835854128682e-14)) / fTemp0;
		fRec3[0] = fConst27 * ((fRec5[0] * (0.0 - 8.99291504835734e-13 * fRec4[0]) + 1.79858300967147e-12 * fRec4[0] * fRec5[1] + fRec5[3] * (0.0 - 1.79858300967147e-12 * fRec4[0]) + 8.99291504835734e-13 * fRec4[0] * fRec5[4]) / fTemp0) - fConst12 * (fConst11 * fRec3[1] + fConst10 * fRec3[2] + fConst8 * fRec3[3]);
		fRec1[0] = vintagetubedriver_p2clip(fConst12 * (fRec3[0] * (fConst6 + fConst29 * fRec2[0]) + fRec3[1] * (fConst4 * (0.0 - 4.53097450264922e-14 * fRec2[0]) - fConst6) + fRec3[2] * (fConst28 * fRec2[0] - fConst6) + fRec3[3] * (fConst6 + fConst4 * (0.0 - 1.51032483421641e-14 * fRec2[0])))) - fConst3 * fRec1[1];
		output0[i0] = FAUSTFLOAT(fConst30 * (fRec1[1] * (0.0 - 2.08330921921294e-05 * fRec0[0]) + 2.08330921921294e-05 * fRec1[0] * fRec0[0]));
		fRec0[1] = fRec0[0];
		fRec2[1] = fRec2[0];
		fRec4[1] = fRec4[0];
		for (int j0 = 4; j0 > 0; j0 = j0 - 1) {
			fRec5[j0] = fRec5[j0 - 1];
		}
		for (int j1 = 3; j1 > 0; j1 = j1 - 1) {
			fRec3[j1] = fRec3[j1 - 1];
		}
		fRec1[1] = fRec1[0];
	}
#undef fVslider0
#undef fVslider1
#undef fVslider2
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case DRIVE: 
		fVslider2_ = static_cast<float*>(data); // , 0.5, 0.0, 1.0, 0.01 
		break;
	case TONE: 
		fVslider1_ = static_cast<float*>(data); // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fVslider0_ = static_cast<float*>(data); // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

Dsp *plugin() {
	return new Dsp();
}

void Dsp::del_instance(Dsp *p)
{
	delete p;
}
} // end namespace vintagetubeoverdrive
