package com.example.complainbox1.Controller;

import com.example.complainbox1.model.Complain;
import com.example.complainbox1.service.ComplainRepo;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.servlet.ModelAndView;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletRequestWrapper;

@Controller
public class IndexController {
    @Autowired
    ComplainRepo complainRepo;
    @RequestMapping("/")
    public String home()
    {
     return "home";
    }
    @RequestMapping("addComplain")
    public String addComplain(HttpServletRequest req){
        String ct=req.getParameter("complaintext");
        String c=req.getParameter("complainee");
        Complain ob = new Complain();
        ob.setComplain(ct);
        ob.setComplainee(c);
        complainRepo.save(ob);
        return "home";
    }
    @RequestMapping("fetchData")
    public ModelAndView addComplain(int id) {
        Complain ob = complainRepo.findById(id).orElse(null);
        ModelAndView modelAndView = new ModelAndView();
        modelAndView.setViewName("fetchData");
        modelAndView.addObject("fetchData", ob);
        return modelAndView;
    }
}

