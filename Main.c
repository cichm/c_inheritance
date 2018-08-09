#include "AbstractProduct.h"
#include "Book.h"
#include "Product.h"
#include "TravelGuide.h"

int main() {
	Product p = Product_new();
	p.set_id(&p, 2);
	p.set_name(&p, "name2");
	p.set_description(&p, "description2");
	p.set_price(&p, 2000);
	p.display(&p);

	TravelGuide tg = TravelGuide_new();
	tg.set_id(&tg, 1);
	tg.set_name(&tg, "name1");
	tg.set_description(&tg, "description1");
	tg.set_price(&tg, 1000);
	tg.set_isbn(&tg, "isbn1");
	tg.set_author(&tg, "author1");
	tg.set_title(&tg, "title1");
	tg.set_country(&tg, "country1");
	tg.display(&tg);
}